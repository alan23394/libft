# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_darr.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 15:12:51 by alan              #+#    #+#              #
#    Updated: 2019/04/05 15:13:06 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_darr

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_darr/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
