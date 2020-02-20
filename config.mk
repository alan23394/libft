# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    config.mk                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/23 01:51:49 by alan              #+#    #+#              #
#    Updated: 2020/02/19 23:03:12 by abarnett         ###   ########.fr        #
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

# Add a -I on each INCLUDE
INCLUDE :=			$(foreach DIR, $(INCLUDE), -I$(DIR))

# Compiler and flags
CC :=				gcc
CFLAGS +=			-Wall -Wextra -Werror $(INCLUDE)

# Colors
include colors/default.mk
