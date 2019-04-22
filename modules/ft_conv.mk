# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_conv.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 05:22:45 by alan              #+#    #+#              #
#    Updated: 2019/04/22 05:22:55 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_conv

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_conv/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
