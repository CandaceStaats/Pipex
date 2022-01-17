# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: candace <candace@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/07 11:57:33 by candace       #+#    #+#                  #
#    Updated: 2022/01/12 11:24:10 by candace       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c utils.c  


OBS = $(SRCS:.c=.o)
LIBFT = Libft/libft.a
all: $(NAME)

$(NAME): $(LIBFT) $(OBS)
	gcc -o $(NAME) $(LIBFT) $(OBS)
$(LIBFT):
	$(MAKE) -C Libft/
%.o: %.c pipexlib.h
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re