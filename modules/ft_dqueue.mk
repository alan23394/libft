# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_dqueue.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 23:16:09 by alan              #+#    #+#              #
#    Updated: 2019/10/19 23:16:15 by alan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Module name (will be printed while compiling)
NAME :=		ft_dqueue

# Includes main variables
include config.mk

# Put .c files into C_SRCS
C_SRCS :=	$(wildcard $(SRC_DIR)/ft_dqueue/*.c)

# Generic makefile rules for compiling a module
include compile_module.mk
