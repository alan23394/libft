# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    compile_module.mk                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/22 23:49:23 by alan              #+#    #+#              #
#    Updated: 2019/03/23 18:49:52 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This makefile is meant to be included!
# NAME should be the name of the module
# C_SRCS should be filled with the src files to compile
# CC and CFLAGS should be defined somewhere else

# Generate the object and dependency filenames from the srcs
C_OBJS :=	$(patsubst %.c,%.o,$(C_SRCS))
DEPENDS :=	$(patsubst %.c,%.d,$(C_SRCS))

.PHONY:		$(NAME) _start _stop clean

$(NAME): _start $(C_OBJS) _stop

_start:
	@- if [ $(QUIET) -eq 0 ]; then printf \
		"$(COMPILE_COLOR)Compiling $(NAME_COLOR)$(NAME) $(DOTS_COLOR)"; \
	fi;

_stop:
	@- if [ $(QUIET) -eq 0 ]; then printf \
		" $(FINISH_COLOR)done$(CLEAR_COLOR)\n"; \
	fi;

%.o: %.c
	@ $(CC) $(CFLAGS) -MMD -MT $@ -c $< -o $@
	@- if [ $(QUIET) -eq 0 ]; then printf "."; fi;

-include $(DEPENDS)

# if [ -f file1 ] || [ -f file2 ] || false; then ... fi
# checks the existence of all of the object files. If none of them exist, I
# have to finish the OR statement with a false (thanks to the foreach
# expansion, I'll always have an extra ||), because I do NOT want it to run the
# rule if there aren't any files.
clean:
	@- if $(foreach FILE, $(C_OBJS),[ -f $(FILE) ] ||) false; then \
		if [ $(QUIET) -eq 0 ]; then printf \
			"$(DELETE_COLOR)Cleaning $(NAME_COLOR)$(NAME)$(CLEAR_COLOR)\n"; \
		fi; \
		$(RM) $(C_OBJS) $(DEPENDS); \
	fi;
