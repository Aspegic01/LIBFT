/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:12:58 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/15 17:54:29 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *str, char c)
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

static int	extract_next_word(char **s, char *c, char ***result, int *j)
{
	int	len;

	while (**s == *c)
		(*s)++;
	if (**s != '\0')
	{
		len = 0;
		while ((*s)[len] && (*s)[len] != *c)
			len++;
		(*result)[*j] = ft_substr(*s, 0, len);
		if (!(*result)[*j])
			return (0);
		(*j)++;
		*s += len;
	}
	return (1);
}

static void	free_split(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;
	int		j;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (!extract_next_word((char **)&s, &c, &result, &j))
		{
			free_split(result, j);
			return (NULL);
		}
	}
	result[j] = NULL;
	return (result);
}
