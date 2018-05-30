# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2018/05/14 19:38:57 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
C_OBJS := $(patsubst %.c,%.o,$(wildcard ./*.c))

CFLAGS += -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(C_OBJS)
	ar rc $(NAME) $(C_OBJS)
	ranlib $(NAME)

clean:
	@- $(RM) $(C_OBJS)

fclean: clean
	@- $(RM) $(NAME)

re: fclean all
