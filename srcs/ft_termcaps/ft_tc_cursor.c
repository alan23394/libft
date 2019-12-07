/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tc_cursor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 07:20:40 by alan              #+#    #+#             */
/*   Updated: 2019/12/05 23:03:05 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_termcaps.h"
#include <curses.h>
#include <term.h>

int	ft_tc_cursor_move(unsigned int line, unsigned int col)
{
	char			*termcaps_str;

	termcaps_str = tgetstr(TC_CURSOR_MOVE, 0);
	if (!termcaps_str)
		return (1);
	termcaps_str = tgoto(termcaps_str, col, line);
	tputs(termcaps_str, 1, ft_tc_putchar);
	return (0);
}
