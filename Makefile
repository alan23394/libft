# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/03/18 13:28:47 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=			libft.a
CC :=			gcc

SRC_DIR :=		./srcs

C_SRCS :=		$(wildcard $(SRC_DIR)/*.c)
C_OBJS :=		$(patsubst %.c,%.o,$(C_SRCS))
DEPENDS :=		$(patsubst %.c,%.d,$(C_SRCS))

INCLUDE_DIRS :=	-I./includes
CFLAGS +=		-g -Wall -Wextra -Werror $(INCLUDE_DIRS)
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
