# ****************************************************************************#
#                                                                             #
#                                                         ::::::::            #
#    Makefile                                           :+:    :+:            #
#                                                      +:+                    #
#    By: candace <candace@student.codam.nl>           +#+                     #
#                                                    +#+                      #
#    Created: 2020/12/03 16:13:50 by candace       #+#    #+#                 #
#    Updated: 2020/12/03 16:13:50 by candace       ########   odam.nl         #
#                                                                             #
# ****************************************************************************#


NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c \
ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c


OBS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBS)
	ar crs $(NAME) $(OBS)

%.o: %.c libft.h
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re