# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/04/22 05:22:28 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

# Include default options
include config.mk

# Name of output library
NAME :=		libft.a

# Modules to compile
MODULES :=	ft_utils\
			ft_mem\
			ft_string\
			ft_word\
			ft_darr\
			ft_unicode\
			ft_put\
			ft_printf\
			get_next_line\
			ft_math\
			ft_list\
			ft_binarytree\
			ft_conv

# Don't change below here
# **************************************************************************** #

# Attach module dir to each module
MODULES :=	$(foreach MOD, $(MODULES), $(MODULES_DIR)/$(MOD))

.PHONY:		all modules

all: $(NAME)
	@- ctags -R

$(NAME): $(shell find $(SRC_DIR) -name "*.c") | modules
	@- if [ $(QUIET) -eq 0 ]; then printf \
		"$(COMPILE_COLOR)Creating $(NAME_COLOR)$(NAME) $(DOTS_COLOR)"; \
	fi;
	@ ar rc $(NAME) $(shell find $(SRC_DIR) -name "*.o" -print)
	@- if [ $(QUIET) -eq 0 ]; then printf "."; fi;
	@ ranlib $(NAME)
	@- if [ $(QUIET) -eq 0 ]; then printf "."; fi;
	@- if [ $(QUIET) -eq 0 ]; then printf \
		" $(FINISH_COLOR)done$(CLEAR_COLOR)\n"; \
	fi;

modules:
	@ $(foreach MOD, $(MODULES),make --no-print-directory -f $(MOD).mk && )true

clean:
	@ $(foreach MOD, $(MODULES),make --no-print-directory -f $(MOD).mk clean;)

fclean: clean
	@- if [ -f $(NAME) ]; then \
		if [ $(QUIET) -eq 0 ]; then printf \
			"$(DELETE_COLOR)Deleting $(NAME_COLOR)$(NAME)$(CLEAR_COLOR)\n"; \
		fi; \
		$(RM) $(NAME); \
	fi;

re: fclean $(NAME)
