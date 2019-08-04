# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    config.mk                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/23 01:51:49 by alan              #+#    #+#              #
#    Updated: 2019/08/03 22:25:34 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Main config file
# Included in other makefiles

# Set this variable to 0 to enable printing
# Set this variable to 1 to disable printing
QUIET :=			0

# Base src directory
SRC_DIR :=			./srcs
# Directories to include
INCLUDE :=			./includes
# Location of makefile modules
MODULES_DIR :=		./modules

# Add a -I on each INCLUDE
INCLUDE :=			$(foreach DIR, $(INCLUDE), -I$(DIR))

# Compiler and flags
CC :=				gcc
CFLAGS +=			-Wall -Wextra -Werror $(INCLUDE)

# Colors
COMPILE_COLOR :=	\e[1;32m
NAME_COLOR :=		\e[1;33m
DOTS_COLOR :=		\e[1;35m
FINISH_COLOR :=		\e[1;36m
DELETE_COLOR :=		\e[1;31m
CLEAR_COLOR :=		\e[m

.PHONY: so debug

# Compiler flag options
so: CFLAGS += -fPIC
debug: CFLAGS += -g
