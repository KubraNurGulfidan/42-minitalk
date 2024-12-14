/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:39:54 by kgulfida          #+#    #+#             */
/*   Updated: 2023/12/27 13:20:56 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int		len;
	long	number;

	number = nbr;
	len = 0;
	if (number < 0)
	{
		number *= -1;
		write(1, "-", 1);
	}
	if (number < 16)
	{
		write(1, &base[number], 1);
		len++;
	}
	else if (number >= 16)
	{
		len += ft_putnbr_base(number / 16, base);
		len += ft_putnbr_base(number % 16, base);
	}
	return (len);
}
