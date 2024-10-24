/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:52:55 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/24 18:55:50 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr = (char *)s;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&ptr[i]);
		}
		i++;

	}
	if (ptr[i] == (unsigned char)c)
	{
		return (&ptr[i]);
	}
	return (NULL);
}
int main()
{
	char s[] = "hello ward";
	char ch = 0;
	char *result = ft_strchr(s,ch);
	printf("%s\n",result);
}

