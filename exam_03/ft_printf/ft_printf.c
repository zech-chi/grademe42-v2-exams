/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:07:45 by zech-chi          #+#    #+#             */
/*   Updated: 2024/01/31 11:07:50 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char *str, int *counter)
{
	if (!str)
	{
		write(1, "(null)", 6);
		(*counter) += 6;
	}
	else
	{
		while (*str)
		{
			ft_putchar(*str, counter);
			str++;
		}
	}
}

void	ft_putnbr(long long n, int *counter)
{
	if (n < 0)
	{
		ft_putchar('-', counter);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0', counter);
	}
	else
	{
		ft_putnbr(n / 10, counter);
		ft_putnbr(n % 10, counter);
	}
}

void	ft_puthex(unsigned int u, int *counter)
{
	if (u < 16)
	{
		ft_putchar("0123456789abcdef"[u], counter);
	}
	else
	{
		ft_puthex(u / 16, counter);
		ft_puthex(u % 16, counter);
	}
}

int	ft_printf(const char *format, ...)
{
	int		counter;
	va_list	args;

	if (!format)
		return (0);
	va_start(args, format);
	counter = 0;
	while (*format)
	{
		if (*format != '%')
			ft_putchar(*format, &counter);
		else
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(args, char *), &counter);
			else if (*format == 'd')
				ft_putnbr(va_arg(args, int), &counter);
			else if (*format == 'x')
				ft_puthex(va_arg(args, unsigned int), &counter);
		}
		format++;
	}
	return (counter);
}
