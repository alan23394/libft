# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    compile_module.mk                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/22 23:49:23 by alan              #+#    #+#              #
#    Updated: 2019/03/23 04:55:13 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This makefile is meant to be included!
# NAME should be the name of the module
# C_SRCS should be filled with the src files to compile
# CC and CFLAGS should be defined somewhere else

C_OBJS :=	$(patsubst %.c,%.o,$(C_SRCS))
DEPENDS :=	$(patsubst %.c,%.d,$(C_SRCS))

.PHONY:		$(NAME)_start $(NAME)_stop $(NAME) clean

$(NAME): $(NAME)_start $(C_OBJS) $(NAME)_stop

$(NAME)_start:
	@echo -ne "$(COMPILE_COLOR)Compiling $(NAME_COLOR)$(NAME) $(DOTS_COLOR)"

$(NAME)_stop:
	@echo -e " $(FINISH_COLOR)done\e[m"

%.o: %.c
	@$(CC) $(CFLAGS) -MMD -MT $@ -c $< -o $@
	@echo -n "."

-include $(DEPENDS)

clean:
	@echo -e "$(DELETE_COLOR)Cleaning $(NAME_COLOR)$(NAME)"
	@$(RM) $(C_OBJS) $(DEPENDS) name_start name_stop
