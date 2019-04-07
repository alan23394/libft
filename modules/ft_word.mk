# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_word.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 16:17:49 by alan              #+#    #+#              #
#    Updated: 2019/04/07 16:17:57 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_word

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_word/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
