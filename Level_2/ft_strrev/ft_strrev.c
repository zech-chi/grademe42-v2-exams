int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

char    *ft_strrev(char *str)
{
	int	left;
	int	right;

	left = -1;
	right = ft_strlen(str);
	while (++left < --right)
		ft_swap(&str[left], &str[right]);
	return (str);
}
