/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:31:01 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/29 18:37:12 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_word(char *str)
{
	int  i;
	i = 0;
	int count;
	if (str[i] != 32 && str[i] != '\0' )
	{
		count++;
	}
	while(str[i])
	{
		if (str[i -1] == 32 && str[i] != 32)
			count++;
		i++;
	}
	return count;
	
	
}
char **ft_split(char const *s, char c)
{
	
}