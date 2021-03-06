/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:55:45 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 14:55:49 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	nb;

	i = 0;
	signe = 1;
	nb = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signe *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb * signe > 2147483647)
			return (-1);
		if (nb * signe < -2147483648)
			return (0);
		nb = (nb * 10) + (str[i++] - '0');
	}
	return (nb * signe);
}
