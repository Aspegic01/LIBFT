/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:48:04 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/28 17:55:14 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*dest;
	
	dest = (char *)malloc(len + 1);
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (len)
	{
		dest[i] = s[i + start];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest); 
}
int main()
{
	char *str = "hello, world!";
	char *r = ft_substr(str,7,5);
	puts(r);
}