# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2018/04/17 15:27:08 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CFLAGS = -Wall -Wextra -Werror -I./includes/
SRC = ./srcs/
FILES = $(SRC)ft_isdigit.c $(SRC)ft_putchar.c $(SRC)ft_putstr.c

check: $(FILES)
	gcc -o check $(CFLAGS) main.c $(SRC)check.c $(FILES)

clean:
	rm check
