/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:56:40 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/15 18:00:04 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_strrev(char *str, long n, int len)
{
	while (n > 0)
	{
		str[--len] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		is_negative;
	char	*str;

	num = n;
	len = count_digit(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	if (!num)
		str[0] = '0';
	is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num *= -1;
	}
	str[len] = '\0';
	ft_strrev(str, num, len);
	if (is_negative)
		str[0] = '-';
	return (str);
}
