/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:42:09 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/25 15:56:32 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
        {
            return (char *)&s[i];
        }
        i--;
    }
    return NULL;
}
