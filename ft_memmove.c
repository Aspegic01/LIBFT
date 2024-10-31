/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:12:31 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/31 11:46:28 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	*s = (unsigned char *)src;
	*d = (unsigned char *)dest;
	if (dest > src)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
