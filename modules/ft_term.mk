# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_term.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/28 16:18:19 by alan              #+#    #+#              #
#    Updated: 2019/11/16 07:53:13 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_term

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_term/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
