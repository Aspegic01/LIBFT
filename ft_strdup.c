/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:30:44 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/28 13:52:18 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*dest;
	int	i;
	int	len;
	len = ft_strlen(s1);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == 0)
	{
		return NULL;
	}
	i = 0;
	while (s1[i] != 0)
	{
		dest[i] = s1[i];
		i++;
	}
	return dest;
	
}
int main()
{
	const char *original = "Hello, World!";
	char *duplicate = ft_strdup(original);

	if (duplicate != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
}