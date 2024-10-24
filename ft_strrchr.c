/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:42:09 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/24 20:47:37 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	char *r = (char *)s;
	
	i = 0;
	while (s[i] != 0)
		i++;
	i--;
	if (s[i] == c)
	{
		return (r);
	}
	return 0;
}
int main()
{

	char s[]="hello word";
	char ch='o';
	char *result = ft_strrchr(s,ch);
	printf("%s\n",result);
}
