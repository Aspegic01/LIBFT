/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:47:35 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/01 11:42:13 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int glen(int n) 
{
    int len = 0;
    if (n == 0) 
	{
        return 1; 
    }
    if (n < 0) 
	{ 
        n *= -1;
		len++;
    }
    while (n > 0) 
	{
        n = n / 10;
        len++;
    }
    return len;
}
char *ft_itoa(int n) 
{
    int len = glen(n);
    char *str = (char *)malloc(sizeof(char) * (len + 1)); 
    if (str == 0)
        return 0; 
    if (n == 0)
	{
        str[0] = '0';
        str[1] = '\0'; 
   		return str;
	}
    int is_negative = 0;
    if (n < 0)
	{
        is_negative = 1;
        n *= -1;
    }
    str[len] = '\0'; 
    while (n > 0)
	{
        str[--len] = n % 10 + '0'; 
        n /= 10;
	}
    if (is_negative) 
	{
        str[0] = '-';
    }
    return str;
}

