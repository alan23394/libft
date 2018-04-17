/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:19:41 by abarnett          #+#    #+#             */
/*   Updated: 2018/04/17 15:31:42 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "libft.h"

void check_isdigit()
{
	ft_putstr("ft_isdigit:\n");
	ft_putstr("Checking Numbers (Expecting all 1's):		\0");
	ft_putchar(ft_isdigit('0') + 48);
	ft_putchar(ft_isdigit('1') + 48);
	ft_putchar(ft_isdigit('2') + 48);
	ft_putchar(ft_isdigit('3') + 48);
	ft_putchar(ft_isdigit('4') + 48);
	ft_putchar(ft_isdigit('5') + 48);
	ft_putchar(ft_isdigit('6') + 48);
	ft_putchar(ft_isdigit('7') + 48);
	ft_putchar(ft_isdigit('8') + 48);
	ft_putchar(ft_isdigit('9') + 48);
	ft_putchar('\n');
	ft_putstr("Checking Non-Numbers (Expecting all 0's):	\0");
	ft_putchar(ft_isdigit('a') + 48);
	ft_putchar(ft_isdigit('A') + 48);
	ft_putchar(ft_isdigit('?') + 48);
	ft_putchar(ft_isdigit('g') + 48);
	ft_putchar(ft_isdigit('-') + 48);
	ft_putchar(ft_isdigit('+') + 48);
	ft_putchar(ft_isdigit('`') + 48);
	ft_putchar(ft_isdigit('{') + 48);
	ft_putchar(ft_isdigit(',') + 48);
	ft_putchar(ft_isdigit('Z') + 48);
	ft_putchar('\n');
}
