# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 14:22:04 by abarnett          #+#    #+#              #
#    Updated: 2020/02/16 00:20:09 by abarnett         ###   ########.fr        #
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

# Add a fake directory component that indicates what we want to do
# Get rid of it when passing it on with $(@F) (uses filename component of $@)
MODULES_SO :=		$(foreach MOD,$(MODULES),so/$(MOD))
MODULES_CLEAN :=	$(foreach MOD,$(MODULES),clean/$(MOD))
MODULES_DEPS :=		$(foreach MOD,$(MODULES),$(SRC_DIR)/$(MOD)/deps.mk)

# Variable for compiling modules
MAKE_MODULE :=		$(MAKE) -f compile_module.mk

.PHONY:		all so $(MODULES) $(MODULES_SO) $(MODULES_CLEAN) clean fclean re

all: tags $(NAME)

so: tags $(NAME_SO)

tags: $(shell find $(SRC_DIR) -name "*.c" -print)
	@- ctags -R

$(NAME): $(MODULES)
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

$(NAME_SO): $(MODULES_SO)
	@- if [ $(QUIET) -eq 0 ]; then printf \
		"$(COMPILE_COLOR)Creating $(NAME_COLOR)$(NAME_SO) $(DOTS_COLOR)"; \
	fi;
	@ gcc -shared -Wl,-soname,$(SONAME) -o $(NAME_SO) \
		$(shell find $(SRC_DIR) -name "*.o" -print)
	@- if [ $(QUIET) -eq 0 ]; then printf "."; fi;
	@- if [ $(QUIET) -eq 0 ]; then printf \
		" $(FINISH_COLOR)done$(CLEAR_COLOR)\n"; \
	fi;

-include $(MODULES_DEPS)

$(MODULES):
	@ NAME=$@ $(MAKE_MODULE)

$(MODULES_SO):
	@ NAME=$(@F) $(MAKE_MODULE) so

$(MODULES_CLEAN):
	@ NAME=$(@F) $(MAKE_MODULE) clean

clean: $(MODULES_CLEAN)
	@ $(RM) tags

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

re: fclean all
