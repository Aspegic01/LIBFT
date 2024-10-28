/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:43:53 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/28 12:29:38 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	size_t	i;

	tmp = malloc(count * size);
	
	if (!tmp)
	{
		return (NULL);
	}
	i = 0;
	
	while (i < count * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}
