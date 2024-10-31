/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:17:21 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/31 15:39:51 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != 0 && i < n)
		i++;
	j = i;
	while (s2[i - j] != 0 && i < n - 1)
	{
		s1[i] = s2[i - j];
		i++;
	}
	if (j < n)
		s1[i] = 0;
	return (j + ft_strlen(s2));
}
