#include "stdlib.h"

int	ft_search(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char	*ss1;

	ss1 = (char	*)s1;
	while (*ss1 && ft_search(s2, *ss1) == 0)
		ss1++;
	if (*ss1)
		return (ss1);
	return (NULL);
}
