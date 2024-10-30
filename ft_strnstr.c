/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:10:08 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/30 15:29:06 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(little);

	if (little[0] == 0)
	{
		return ((char *)big);
	}
	while (big[i] != 0 && len-- >= j)
	{
		if (ft_strncmp(&big[i], little, j) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
