/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:36:16 by kgulfida          #+#    #+#             */
/*   Updated: 2024/04/25 20:27:53 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "ft_printf/ft_printf.h"
# include <signal.h>
# include <unistd.h>

void	get_signal(int signum);
void	bitwise(int pid, char c);
int		ft_atoi(const char *str);

#endif