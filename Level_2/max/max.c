int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	maximus;

	if (len == 0)
		return (0);
	maximus = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > maximus)
			maximus = tab[i];
		i++;
	}
	return (maximus);
}
