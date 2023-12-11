#include <stdlib.h>

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
