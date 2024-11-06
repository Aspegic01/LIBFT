/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:36:08 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/06 11:41:48 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_word(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (str[i] != c && str[i] != '\0' )
	{
		count++;
	}
	while (str[i])
	{
		if (str[i - 1] == c && str[i] != c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		slen;

	strs = (char **)malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
		{
			s++;
		}
		if (!ft_strchr(s, c))
			slen = ft_strlen(s);
		else
			slen = ft_strchr(s, c) - s;
		strs[i++] = ft_substr(s, 0, slen);
		s += slen;
	}
	strs[i] = (NULL);
	return (strs);
}
