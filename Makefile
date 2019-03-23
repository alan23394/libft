# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/03/23 05:35:17 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

include config.mk

NAME :=		libft.a

MODULES :=	ft_printf get_next_line

# Don't change below here
# **************************************************************************** #

MODULES :=	$(foreach MOD, $(MODULES), $(MODULES_DIR)/$(MOD))

.PHONY:		all  modules

all: $(NAME)
	@ ctags -R

$(NAME): $(shell find $(SRC_DIR) -name "*.c") | modules
	@echo -ne "$(COMPILE_COLOR)Creating $(NAME_COLOR)$(NAME) $(DOTS_COLOR)"
	@ar rc $(NAME) $(shell find $(SRCS) -name "*.o" -print)
	@echo -n "."
	@ranlib $(NAME)
	@echo -n "."
	@echo -e " $(FINISH_COLOR)done\e[m"

modules:
	@$(foreach MOD, $(MODULES),make --no-print-directory -f $(MOD).mk;)

clean:
	@$(foreach MOD, $(MODULES),make --no-print-directory -f $(MOD).mk clean;)

fclean: clean
	@echo -e "$(DELETE_COLOR)Deleting $(NAME_COLOR)$(NAME)"
	@$(RM) $(NAME)

re: fclean $(NAME)
