#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isprint(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *nptr);
char *ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
size_t	*ft_strlcpy(char *dst, const char *src, size_t size);

#endif
