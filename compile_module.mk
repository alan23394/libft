# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    compile_module.mk                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/22 23:49:23 by alan              #+#    #+#              #
#    Updated: 2020/02/20 00:08:36 by abarnett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiles a folder of C files into an archive
# Displays a little spinner, which moves every time a file finishes compiling

include config.mk

LIB_DIR :=	$(SRC_DIR)/$(NAME)
LIB :=		$(LIB_DIR)/$(NAME).a
C_SRCS :=	$(shell find $(LIB_DIR) -name "*.c")

# Generate the object and dependency filenames from the srcs
C_OBJS :=	$(patsubst %.c,%.o,$(C_SRCS))
DEPENDS :=	$(patsubst %.c,%.d,$(C_SRCS))

COMPILING_MSG :=	$(COMPILE_COLOR)Compiling $(NAME_COLOR)$(NAME)
DONE_MSG :=			$(DOTS_COLOR)...$(FINISH_COLOR)done$(CLEAR_COLOR)
ERROR_MSG :=		$(DOTS_COLOR)...$(DELETE_COLOR)errors!$(CLEAR_COLOR)
CLEAN_MSG :=		$(DELETE_COLOR)Cleaning $(NAME_COLOR)$(NAME)$(CLEAR_COLOR)

# Number counter for compiled files
num :=		0

.PHONY:		all so _start _stop clean

all: $(LIB)

so: CFLAGS += -fPIC
so: $(LIB)

$(LIB): $(C_OBJS) | _stop
	@ ar rc $(LIB) $(C_OBJS)
	@ ranlib $(LIB)

_start:
	@- if [ $(QUIET) -eq 0 ]; then \
		printf "$(DOTS_COLOR)|   $(COMPILING_MSG)"; \
	fi;

_stop:
	@- if [ $(QUIET) -eq 0 ]; then printf \
		"\r$(DOTS_COLOR)+%-2d $(COMPILING_MSG)$(DONE_MSG)\n" \
		"$(num)"; \
	fi;
	@- if [ ! -s /tmp/$(NAME)_err.log ]; then \
		rm -f /tmp/$(NAME)_err.log; \
	fi;

%.o: %.c | _start
	@ if ! ($(CC) $(CFLAGS) -MMD -MT $@ -c $< -o $@ 2>> "/tmp/$(NAME)_err.log"); then \
			printf "\r$(DOTS_COLOR)!   $(COMPILING_MSG)$(ERROR_MSG)\n"; \
			exit 1; \
	fi;
	@- if [ $(QUIET) -eq 0 ] && [ -z "$(MAKEFLAGS)" ]; then \
		spinner="/-\|"; \
		printf "\r$(DOTS_COLOR)%c" "$${spinner:$$(( $(num) % 4 )):1}"; \
	fi;
	$(eval $(shell echo "num=$$(( ($(num) + 1) ))"))

-include $(DEPENDS)

# if [ -f file1 ] || [ -f file2 ] || false; then ... fi
# checks the existence of all of the object files. If none of them exist, I
# have to finish the OR statement with a false (thanks to the foreach
# expansion, I'll always have an extra ||), because I do NOT want it to run the
# rule if there aren't any files.
clean:
	@- if $(foreach FILE, $(C_OBJS),[ -f $(FILE) ] ||) [ -f $(LIB) ]; then \
		if [ $(QUIET) -eq 0 ]; then \
			printf "$(CLEAN_MSG)\n"; \
		fi; \
		$(RM) $(C_OBJS) $(DEPENDS) $(LIB); \
	fi;
