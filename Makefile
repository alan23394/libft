# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2019/11/16 06:58:50 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Configure options

# Include default options
include config.mk

# Name of output library
NAME :=		libft.a
NAME_SO :=	libft.so.1.0.0
SONAME :=	libft.so.1

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
			ft_node\
			ft_dnode\
			ft_list\
			ft_binarytree\
			ft_queue\
			ft_iter\
			ft_conv\
			ft_term\
			ft_termcaps

# Don't change below here
# **************************************************************************** #

# Attach module dir to each module
MODULES :=	$(foreach MOD, $(MODULES), $(MODULES_DIR)/$(MOD))

.PHONY:		all so modules modules_so

all: tags $(NAME)

so: tags $(NAME_SO)

tags: $(shell find $(SRC_DIR) -name "*.c" -print)
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

$(NAME_SO): $(shell find $(SRC_DIR) -name "*.c") | modules_so
	@- if [ $(QUIET) -eq 0 ]; then printf \
		"$(COMPILE_COLOR)Creating $(NAME_COLOR)$(NAME_SO) $(DOTS_COLOR)"; \
	fi;
	@ gcc -shared -Wl,-soname,$(SONAME) -o $(NAME_SO) \
		$(shell find $(SRC_DIR) -name "*.o" -print)
	@- if [ $(QUIET) -eq 0 ]; then printf "."; fi;
	@- if [ $(QUIET) -eq 0 ]; then printf \
		" $(FINISH_COLOR)done$(CLEAR_COLOR)\n"; \
	fi;

modules:
	@ $(foreach MOD, $(MODULES),make --no-print-directory -f $(MOD).mk && )true

modules_so:
	@ $(foreach MOD, $(MODULES),\
		make --no-print-directory -f $(MOD).mk so && )true

clean:
	@ $(foreach MOD, $(MODULES),make --no-print-directory -f $(MOD).mk clean;)

fclean: clean
	@- if [ -f $(NAME) ]; then \
		if [ $(QUIET) -eq 0 ]; then printf \
			"$(DELETE_COLOR)Deleting $(NAME_COLOR)$(NAME)$(CLEAR_COLOR)\n"; \
		fi; \
		$(RM) $(NAME); \
	fi
	@- if [ -f $(NAME_SO) ]; then \
		if [ $(QUIET) -eq 0 ]; then printf \
			"$(DELETE_COLOR)Deleting $(NAME_COLOR)$(NAME_SO)$(CLEAR_COLOR)\n"; \
		fi; \
		$(RM) $(NAME_SO); \
	fi;

re: fclean $(NAME)
