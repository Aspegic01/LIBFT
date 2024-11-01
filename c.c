/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:44:35 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/01 14:29:09 by mlabrirh         ###   ########.fr       */
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

void fill_string(char *str, int n, int len)
{
    while (n > 0)
    {
        str[--len] = n % 10 + '0';
        n  = n / 10;
        
    }
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
    fill_string(str, n, len);
    if (is_negative)
        str[0] = '-';
    return str;
}
int main()
{
    printf("%s\n",ft_itoa(-892182));
}