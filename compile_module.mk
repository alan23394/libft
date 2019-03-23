# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    compile_module.mk                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/22 23:49:23 by alan              #+#    #+#              #
#    Updated: 2019/03/23 06:46:55 by alan             ###   ########.fr        #
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
	@if [ $(QUIET) -eq 0 ]; then echo -ne\
		"$(COMPILE_COLOR)Compiling $(NAME_COLOR)$(NAME) $(DOTS_COLOR)";\
		fi

_stop:
	@if [ $(QUIET) -eq 0 ]; then echo -e\
		" $(FINISH_COLOR)done$(CLEAR_COLOR)";\
		fi

%.o: %.c
	@$(CC) $(CFLAGS) -MMD -MT $@ -c $< -o $@
	@if [ $(QUIET) -eq 0 ]; then echo -n "."; fi

-include $(DEPENDS)

clean:
	@if [ $(QUIET) -eq 0 ]; then echo -e\
		"$(DELETE_COLOR)Cleaning $(NAME_COLOR)$(NAME)$(CLEAR_COLOR)";\
		fi
	@$(RM) $(C_OBJS) $(DEPENDS)
