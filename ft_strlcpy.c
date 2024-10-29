/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:05:03 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/29 10:03:47 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	//char	*s;

	//s = (char *)src;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size)
			{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	//while (src[i])
		//i++;

	return 0;
}
/*int main()
{
	char s[] = "hello";
	char h[5];
	ft_strlcpy(h,s,3);
	printf("%s\n",h);
}
*/
