/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:22:52 by kgulfida          #+#    #+#             */
/*   Updated: 2023/12/26 18:32:52 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_len(long int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len = 1;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = num_len((long int)n);
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr((n * (-1)));
	}
	else if (n > 9)
	{
		ft_putnbr((n / 10));
		ft_putnbr((n % 10));
	}
	else
		ft_putchar((n + '0'));
	return (len);
}
