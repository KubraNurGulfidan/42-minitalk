/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:40:49 by kgulfida          #+#    #+#             */
/*   Updated: 2024/04/25 20:29:59 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	get_signal(int signum)
{
	static int	i;
	static int	bit;

	if (signum == SIGUSR1)
		bit |= (1 << i);
	i++;
	if (i == 7)
	{
		ft_printf("%c", bit);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("PID : %d\n", getpid());
	signal(SIGUSR1, get_signal);
	signal(SIGUSR2, get_signal);
	while (1)
		pause();
}
