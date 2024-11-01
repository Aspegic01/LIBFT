/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:04:41 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/01 09:24:00 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getlen(long n)  // static keyword removed
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int m)
{
	size_t	len;
	long	n;
	char	*s;

	n = (long)m;
	len = ft_getlen(n);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	if (!n)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[len] = 0;
	while (n > 0)
	{
		s[--len] = n % 10 + 48;
		n /= 10;
	}
	return (s);
}
#include "libft.h" // Assuming this contains the declaration of ft_itoa
#include <stdio.h>

int main() {
  printf("%s\n",ft_itoa(37463));

  return 0;
}