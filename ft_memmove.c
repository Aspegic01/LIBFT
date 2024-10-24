/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:12:31 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/23 10:16:59 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s = (unsigned char *)src;
	unsigned char	*d = (unsigned char *)dest;

	if (dest > src)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
