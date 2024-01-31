#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len++]);
	return (len);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*str3;
	int		i = -1;
	int		j = 0;
	if (!str1 && !str2)
		return (NULL);
	else if (!str1)
		return (str2);
	else if (!str2)
		return (str1);
	str3 = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!str3)
		return (free(str1), free(str2), NULL);
	while (str1[++i])
		str3[i] = str1[i];
	while (str2[j])
		str3[i++] = str2[j++];
	str3[i] = 0;
	return (free(str1), free(str2), str3);
}

char	*ft_substr(char *str, int size)
{
	char	*new_str;
	int		i = -1;
	if (!str)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);
	while (++i < size)
		new_str[i] = str[i];
	new_str[i] = 0;
	return (new_str);
}

void	ft_shift_or_clean_buffer(char *buffer, int right)
{
	int	left = 0;

	while (buffer[right])
		buffer[left++] = buffer[right++];
	while (buffer[left])
		buffer[left++] = 0;
}

int	ft_has_newline(char *buffer, char **line)
{
	int	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
	{
		*line = ft_strjoin(*line, ft_substr(buffer, i + 1));
		ft_shift_or_clean_buffer(buffer, i + 1);
		if (!(*line))
			return (-1);
		return (1);
	}
	*line = ft_strjoin(*line, ft_substr(buffer, i));
	ft_shift_or_clean_buffer(buffer, i);
	if (!(*line))
		return (-1);
	return (0);
}

char	*get_next_line(int fd)
{
	static	char	buffer[BUFFER_SIZE + 1];
	char			*line = NULL;
	int				r = 0;
	int				e = 0;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (ft_has_newline(buffer, &line) == 1)
		return (line);
	while ((r = read(fd, buffer, BUFFER_SIZE)) > 0 && (e = ft_has_newline(buffer, &line)) == 0);
	if ((r == -1 || e == -1) || (line && ft_strlen(line) == 1))
	{
		if (line)
			free(line);
		return (line = NULL, NULL);
	}
	return (line);
}
