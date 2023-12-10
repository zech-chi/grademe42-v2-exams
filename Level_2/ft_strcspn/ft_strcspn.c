#include <stdlib.h>

int	ft_IsInReject(const char *reject, char c)
{
	size_t	i;

	i = 0;
	while (reject[i])
	{
		if (reject[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_IsInReject(reject, s[i]) == 0)
		i++;
	return (i);
}
