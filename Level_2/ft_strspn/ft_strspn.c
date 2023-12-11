#include <stdlib.h>

#include <stdio.h>
#include <string.h>

int	ft_IsInAccept(const char *accept, char c)
{
	size_t	i;

	i = 0;
	while (accept[i])
	{
		if (accept[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_IsInAccept(accept, s[i]))
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("mine: %zu\n", ft_strspn(av[1], av[2]));
	printf("expc: %lu\n", strspn(av[1], av[2]));
	return (0);
}