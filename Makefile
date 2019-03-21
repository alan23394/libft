# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/03/21 02:46:06 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #

# Configure options

NAME :=			libft.a
CC :=			gcc

SRC_DIR :=		./srcs
MODULES_DIR :=	./modules

C_SRCS :=		$(wildcard $(SRC_DIR)/*.c)
INCLUDE_DIRS :=	-I./includes

include $(MODULES_DIR)/ft_printf.mk

CFLAGS +=		-g -Wall -Wextra -Werror $(INCLUDE_DIRS)

# **************************************************************************** #

# Don't change below here

C_OBJS :=		$(patsubst %.c,%.o,$(C_SRCS))
DEPENDS :=		$(patsubst %.c,%.d,$(C_SRCS))

DEPFLAGS +=		-MMD -MT $@

.PHONY:			all clean fclean re

all: $(NAME)
	@ctags -R

$(NAME): $(C_OBJS)
	ar rc $(NAME) $(C_OBJS)
	ranlib $(NAME)

%.o: %.c Makefile
	$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $@

-include $(DEPENDS)

clean:
	@- $(RM) $(C_OBJS) $(DEPENDS)

fclean: clean
	@- $(RM) $(NAME)

re: fclean all
