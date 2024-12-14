/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:35:49 by kgulfida          #+#    #+#             */
/*   Updated: 2023/12/27 13:50:40 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putnbr_unsigned((n / 10));
		len += ft_putnbr_unsigned((n % 10));
	}
	else
		len += ft_putchar((n + '0'));
	return (len);
}
