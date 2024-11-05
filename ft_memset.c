/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:03:16 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/04 21:32:59 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char) c;
		i++;
	}
	return (s);
}
int main()
{
	int i = 4286565;

	ft_memset(&i, 57, 1);
	ft_memset((char *)&i + 1, 5, 1);
	ft_memset((char *)&i + 2, 0, 1);
	ft_memset((char *)&i + 3, 0 ,1);
	printf("%d\n", i);
}
