/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:37:33 by mdouiri           #+#    #+#             */
/*   Updated: 2021/12/28 18:44:41 by mdouiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <unistd.h>

void	ft_what(const char m, va_list va, int *count)
{
	if (m == 'd' || m == 'i')
		ft_putnbr(va_arg(va, int), "0123456789", count);
	else if (m == 'u')
		ft_putnbri(va_arg(va, unsigned int), "0123456789", count);
	else if (m == 'c')
		*count += ft_putchar(va_arg (va, int));
	else if (m == 'X')
		ft_putnbr(va_arg(va, unsigned int), "0123456789ABCDEF", count);
	else if (m == 'x')
		ft_putnbr(va_arg (va, unsigned int), "0123456789abcdef", count);
	else if (m == 's')
		*count += ft_putstr(va_arg (va, char *));
	else if (m == '%')
		*count += ft_putchar('%');
	else if (m == 'p')
	{
		*count += ft_putstr("0x");
		ft_putnbri(va_arg (va, unsigned long int), "0123456789abcdef", count);
	}
}

int	ft_printf(const	char *bon, ...)
{
	va_list	va;
	int		count;
	int		i;

	va_start(va, bon);
	i = 0;
	count = 0;
	while (bon[i])
	{
		if (bon[i] == '%')
		{
			i++;
			ft_what(bon[i], va, &count);
		}
		else
		{
			count++;
			write(1, &bon[i], 1);
		}
		i++;
	}
	va_end(va);
	return (count);
}
