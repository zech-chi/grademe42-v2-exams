#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int	read_fd;

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

int	ft_strlen(char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(char *s)
{
	char	*s_dup;
	int		i;
	int		len;

	len = ft_strlen(s);
	s_dup = malloc(len + 1);
	if (!s_dup)
		return (ft_putstr_fd("error: fatal\n", 2), exit(1), NULL);
	i = -1;
	while (s[++i])
		s_dup[i] = s[i];
	s_dup[i] = 0;
	return (s_dup);
}

void	ft_freecmd(char **cmd)
{
	int	r;

	if (!cmd)
		return ;
	r = 0;
	while (cmd[r])
		free(cmd[r++]);
	free(cmd);
	cmd = NULL;
}

char	**ft_getcmd(char **av, int *l, int *sp)
{
	int		r;
	int		i;
	char	**cmd;

	r = *l;
	while (av[r] && strcmp(av[r], "|") && strcmp(av[r], ";"))
		r++;
	if (!av[r] || !strcmp(av[r], ";"))
		*sp = 0;
	else
		*sp = 1;
	cmd = malloc(sizeof(char *) * (r - *l + 1));
	if (!cmd)
		return (ft_putstr_fd("error: fatal\n", 2), exit(1), NULL);
	i = 0;
	while (*l < r)
		cmd[i++] = ft_strdup(av[(*l)++]);
	cmd[i] = NULL;
	return (cmd);
}

void	ft_cd(char **cmd)
{
	if (!cmd[1] || cmd[2])
	{
		ft_putstr_fd("error: cd: bad arguments\n", 2);
		return ;
	}
	if (chdir(cmd[1]) == -1)
	{
		ft_putstr_fd("error: cd: cannot change directory ", 2);
		ft_putstr_fd(cmd[1], 2);
		ft_putstr_fd("\n", 2);
		exit(1);
	}
}

void	ft_execute(char **cmd, char **env, int sp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd))
		return (ft_putstr_fd("error: fatal\n", 2), exit(1));
	pid = fork();
	if (pid == -1)
		return (ft_putstr_fd("error: fatal\n", 2), exit(1));
	else if (pid == 0)
	{
		dup2(read_fd, 0);
		close(fd[0]);
		if (sp)
		{
			dup2(fd[1], 1);
			close(fd[1]);
		}
		execve(cmd[0], cmd, env);
		ft_putstr_fd("error: cannot execute ", 2);
		ft_putstr_fd(cmd[0], 2);
		ft_putstr_fd("\n", 2);
		exit(1);
	}
	close(fd[1]);
	waitpid(pid, NULL, 0);
	if (read_fd)
		close(read_fd);
	read_fd = dup(fd[0]);
	close(fd[0]);
}

int	main(int ac, char **av, char **env)
{
	int		sp;
	char	**cmd;
	int		l;

	read_fd = 0;
	if (ac == 1)
		return (0);
	l = 1;
	while (l < ac)
	{
		cmd = ft_getcmd(av, &l, &sp);
		if (cmd && *cmd)
		{
			if (!strcmp(cmd[0], "cd"))
				ft_cd(cmd);
			else
				ft_execute(cmd, env, sp);
		}
		ft_freecmd(cmd);
		l++;
	}
	return (0);
}
