unsigned char 	rev_bits(unsigned char octet)
{
	int	i;
	unsigned char	rev;

	i = -1;
	rev = 0;
	while (++i < 8)
	{
		rev <<= 1;
		if (octet & (1 << i))
			rev += 1;
	}
	return (rev);
}
