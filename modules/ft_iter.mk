# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_iter.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 16:39:18 by alan              #+#    #+#              #
#    Updated: 2019/10/25 16:39:29 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_iter

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_iter/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
