unsigned int	max(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	m;

	if (a == 0 || b == 0)
		return (0);
	m = max(a, b);
	while (m % a != 0 || m % b != 0)
		m++;
	return (m);
}
