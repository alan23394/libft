# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    config.mk                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/23 01:51:49 by alan              #+#    #+#              #
#    Updated: 2019/03/23 04:09:03 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Main config file

# Base src directory
SRC_DIR :=	./srcs
# Directories to include
INCLUDE :=	./includes
# Location of makefile modules
MODULES :=	./modules

# Add a -I on each INCLUDE
INCLUDE :=	$(foreach DIR, $(INCLUDE), -I$(DIR))

# Compiler and flags
CC :=		gcc
CFLAGS +=	-g -Wall -Wextra -Werror $(INCLUDES)

# Colors
COMPILE_COLOR :=	\e[1;32m
NAME_COLOR :=		\e[1;33m
DOTS_COLOR :=		\e[1;32m
FINISH_COLOR :=		\e[0;32m
DELETE_COLOR :=		\e[1;31m
