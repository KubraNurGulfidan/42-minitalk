/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:38:14 by kgulfida          #+#    #+#             */
/*   Updated: 2023/12/27 13:51:29 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list list, const char c)
{
	int	printed;

	printed = 0;
	if (c == 'c')
		printed += ft_putchar(va_arg(list, int));
	else if (c == 's')
		printed += ft_putstr(va_arg(list, char *));
	else if (c == 'p')
	{
		printed += ft_putstr("0x");
		printed += ft_putpointer(va_arg(list, unsigned long));
	}
	else if (c == 'd' || c == 'i')
		printed += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		printed += ft_putnbr_unsigned(va_arg(list, unsigned int));
	else if (c == 'x')
		printed += ft_putnbr_base(va_arg(list, unsigned int),
				"0123456789abcdef");
	else if (c == 'X')
		printed += ft_putnbr_base(va_arg(list, unsigned int),
				"0123456789ABCDEF");
	else if (c == '%')
		printed += ft_putchar('%');
	return (printed);
}

int	ft_printf(const char *c, ...)
{
	int		i;
	va_list	list;
	int		printed;

	i = 0;
	printed = 0;
	va_start(list, c);
	while (c[i])
	{
		if (c[i] == '%')
		{
			printed += check(list, c[i + 1]);
			i++;
		}
		else
			printed += ft_putchar(c[i]);
		i++;
	}
	va_end(list);
	return (printed);
}
