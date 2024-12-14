/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:01:23 by kgulfida          #+#    #+#             */
/*   Updated: 2023/12/27 14:55:44 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n % 16 < 10)
			len += ft_putchar((n % 16) + '0');
		else
			len += ft_putchar((n % 16) - 10 + 'a');
	}
	else if (n >= 16)
	{
		len += ft_putpointer(n / 16);
		len += ft_putpointer(n % 16);
	}
	return (len);
}
