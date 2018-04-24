# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2018/04/23 10:37:46 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
C_OBJS := $(patsubst %.c,%.o,$(wildcard ./srcs/*.c))
INCLUDE_DIRS := ./includes/ ./debug/includes/

debug_NAME := test
debug_C_OBJS := $(patsubst %.c,%.o,$(wildcard ./debug/srcs/*.c))

CFLAGS += -Wall -Wextra -Werror $(foreach includedir,$(INCLUDE_DIRS),-I$(includedir))

.PHONY: all clean re

all: $(debug_NAME)

$(NAME): $(C_OBJS)
	ar rc $(NAME) $(C_OBJS)
	ranlib $(NAME)

$(debug_NAME): $(C_OBJS) $(debug_C_OBJS)
	$(CC) $(CFLAGS) -o $(debug_NAME) $(C_OBJS) $(debug_C_OBJS)

clean:
	@- $(RM) $(C_OBJS) $(debug_C_OBJS)

fclean: clean
	@- $(RM) $(NAME) $(debug_NAME)

clear:
	find . -name "*.sw*" -delete

re: fclean all
