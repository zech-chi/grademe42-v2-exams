//#include "unistd.h"

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

//void	ft_putunbr(unsigned int nbr)
//{
//	if (nbr < 10)
//		ft_putchar(nbr + '0');
//	else
//	{
//		ft_putunbr(nbr / 10);
//		ft_putunbr(nbr % 10);
//	}
//}

//int	ft_atoi(char *str)
//{
//	int	res;
//	int	signe;
//	int	i;

//	res = 0;
//	signe = 1;
//	i = 0;
//	while (str[i] == ' ')
//		i++;
//	if (str[i] == '+' || str[i] == '-')
//	{
//		if (str[i] == '-')
//			signe = -1;
//		i++;
//	}
//	while ('0' <= str[i] && str[i] <= '9')
//		res = res * 10 + str[i++] - '0';
//	return (res * signe);
//}