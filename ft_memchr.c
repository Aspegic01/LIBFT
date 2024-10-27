/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:18:48 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/27 10:27:56 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str = (unsigned char *)s;
	unsigned char ch = (unsigned char)c;

	i = 0;
	while (i < n)
	{
			if (str[i] == ch)
		{
			return &str[i];
		}
		i++;
	}
	return (NULL);
}
