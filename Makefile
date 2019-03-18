# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/03/18 07:28:29 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
C_SRCS := $(wildcard ./*.c)
C_OBJS := $(patsubst %.c,%.o,$(C_SRCS))

CFLAGS += -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)
	@-ctags -R

$(NAME): $(C_SRCS)
	$(CC) $(CFLAGS) -c $(C_SRCS)
	ar rc $(NAME) $(C_OBJS)
	ranlib $(NAME)

clean:
	@- $(RM) $(C_OBJS)

fclean: clean
	@- $(RM) $(NAME)

re: fclean all
