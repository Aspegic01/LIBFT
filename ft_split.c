/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2024/10/30 16:11:20 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

int	count_word(char *str, char c)
{
	int  i;
	i = 0;
	int count = 0;
	if (str[i] != c && str[i] != '\0' )
	{
		count++;
	}
	while(str[i])
	{
		if (str[i -1] == c && str[i] != c)
		{
			count++;
		}
		i++;
	}
	return count;
	
}
char	**ft_split(char const *s, char c)
{
	char	**strs;
	int	i;
	int	slen;
	
	strs =(char **)malloc(sizeof(char *) * (count_word((char *)s,c) + 1));
	if(!strs)
		return 0;
	i = 0;
	while(*s)
	{
		while (*s == c && *s)
		{
			s++;
		}
		if(!ft_strchr(s,c))
			slen = ft_strlen(s);
		else
			slen = ft_strchr(s,c) - s;
		strs[i++] = ft_substr(s,0,slen);
		s += slen;
	}
	strs[i] = NULL;
	return strs;
}
int main()
{
	char s[] = "hello word gg";
	char **word = ft_split(s,' ');
	int i = 0;
	while (word[i])
	{
		printf("%s\n",word[i]);
		i++;
	}	
}