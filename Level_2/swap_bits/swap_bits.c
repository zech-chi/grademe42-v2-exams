unsigned char	reverse_bits(unsigned char octet)
{
	int	shifted_left;
	int	shifted_right;

	shifted_left = octet << 4;
	shifted_right = octet >> 4;
	return (shifted_left | shifted_right);
}
