# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/03/22 22:38:14 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options


NAME :=			libft.a
CC :=			gcc

SRC_DIR :=		./srcs
MODULES_DIR :=	./modules

C_SRCS :=		$(wildcard $(SRC_DIR)/ft_utils/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_mem/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_string/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_unicode/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_put/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_printf/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_printf/flags/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/get_next_line/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_math/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_list/*.c)
C_SRCS +=		$(wildcard $(SRC_DIR)/ft_binarytree/*.c)

INCLUDE_DIRS :=	-I./includes

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
