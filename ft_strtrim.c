/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:22:02 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/29 10:30:00 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strtrim(char const* s1, char const* set)
{
	size_t	s;
	size_t	e;
	char* str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		s = 0;
		e = ft_strlen(s1);
		while (s1[s] && ft_strchr(set, s1[s]))
			s++;
		while (s1[e - 1] && ft_strchr(set, s1[e - 1]) && e > s)
			e--;
		str = (char*)malloc(sizeof(char) * (e - s + 1));
		if (str)
			ft_strlcpy(str, &s1[s], e - s + 1);
	}
	return (str);
}
/*int main()
{
	char s[] = "   hello word  ";
	char *set = " ";
	char *r = ft_strtrim(s,set);
	puts(r);
}
*/
