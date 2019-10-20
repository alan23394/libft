# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_node.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 18:07:58 by alan              #+#    #+#              #
#    Updated: 2019/10/19 18:08:09 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_node

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_node/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
