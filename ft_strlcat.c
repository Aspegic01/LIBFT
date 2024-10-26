/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:33:21 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/26 14:34:26 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] !=0)
	{
		i++;
	}
	j = 0;
	while (i < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	return j;
}
int main ()
{
	char s[]="hello";
	char d[]="word";
	ft_strlcat(d,s,4);
	printf("%s\n",d);
}
