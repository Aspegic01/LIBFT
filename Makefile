LIBC =    ft_bzero.c ft_isalnum.c ft_isalpha.c \
        ft_isascii.c ft_isdigit.c ft_isprint.c \
        ft_memmove.c ft_memset.c ft_memcpy.c ft_strchr.c \
        ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
        ft_strrchr.c ft_tolower.c ft_toupper.c 

SRCS = ${LIBC} ${ADDITIONAL}

SRCSALL = ${LIBC} ${ADDITIONAL} ${BONUS}

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o} 

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
        ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
        ar -rsc ${NAME} ${OBJS}

bonus:    ${OBJSALL}
        ar -rsc ${NAME} ${OBJSALL}

all:     ${NAME}

clean:    
        rm -f ${OBJSALL}

fclean:    clean;
        rm -f ${NAME}

re:    fclean all

.PHONY: all clean fclean re bonus
