/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:57:54 by alan              #+#    #+#             */
/*   Updated: 2019/11/17 06:39:40 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_termcaps.h"
#include <curses.h>
#include <term.h>

/*
** Prints the termcap string referenced by the termcap code
** Takes the termcap code to print.
** Returns 1 if it couldn't be found, else returns 0.
** tputs only returns an error if the string is null, so we don't have to worry
** about it's return code.
*/

int		ft_tc_put(char *tc)
{
	char	*termcaps_str;

	termcaps_str = tgetstr(tc, 0);
	if (!termcaps_str)
		return (1);
	tputs(termcaps_str, 1, ft_tc_putchar);
	return (0);
}

/*
** Returns a number from tgetnum using the passed termcap code
*/

int		ft_tc_getnum(char *tc)
{
	return (tgetnum(tc));
}

/*
** Returns a string from tgetstr using the passed termcap code
*/

char	*ft_tc_getstr(char *tc)
{
	return (tgetstr(tc, 0));
}
