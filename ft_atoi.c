/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:11:19 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/23 15:18:40 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;
	int	i;

	i = 0;
	while((nptr[i]  == ' ') || (nptr[i] == '\t' || nptr[i] == '\r'))
		i++;
	sign = 1;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sign *= -sign;
		}
		i++;
	}
	nb = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 - nptr[i] +48;
		i++;
	}
	return sign * nb;
}
