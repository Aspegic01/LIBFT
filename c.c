/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:44:35 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/11/01 16:17:18 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int count_digit(int n)
{
    int len;

    len = 1;
    if (n < 0)
    { 
        n *= -1;
        len++;
    }
    while (n > 9)
    {
        n = n / 10;
        len++;
    }
    return len;
}
void ft_strrev(char *str, int n, int len)
{
    while (n > 0)
    {
        str[--len] = n % 10 + '0';
        n  = n / 10;
    }
}
char *ft_itoa(int n)
{
    int len;
    int is_negative;

    len = count_digit(n);
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == 0)
        return 0;
    if(!n)
        str[0] = '0';
    is_negative = 0;
    if (n < 0)
    {
        is_negative = 1;
        n *= -1;
    }
    str[len] = '\0';
    ft_strrev(str, n, len);
    if (is_negative)
        str[0] = '-';
    return str;
}
int main()
{
    printf("%s\n",ft_itoa(0));
}