/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabrirh <mlabrirh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:24:10 by mlabrirh          #+#    #+#             */
/*   Updated: 2024/10/28 17:38:38 by mlabrirh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *dest;
    size_t i;

    if (!s || start >= strlen(s)) // Check if start is out of bounds
        return strdup(""); // Return empty string if start is out of bounds

    // Allocate memory for the substring + null terminator
    dest = (char *)malloc(len + 1);
    if (!dest)
        return NULL; // Handle memory allocation failure

    i = 0;
    while (i < len && s[start + i] != '\0') {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the string

    return dest;
}

int main() {
    char *str = "Hello, World!";
    char *substr = ft_substr(str, 7, 5); // Extracts "World"

    if (substr) {
        printf("Substring: %s\n", substr);
        free(substr); // Free allocated memory
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}

