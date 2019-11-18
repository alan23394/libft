/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tc_setup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:19:23 by alan              #+#    #+#             */
/*   Updated: 2019/11/18 10:52:14 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <curses.h>
#include <term.h>

/*
** This function sets up termcaps by getting the terminal description with
** tgetent, using the terminal name stored in the TERM environment variable.
*/

int	ft_tc_setup(void)
{
	char	*term_name;

	term_name = getenv("TERM");
	if (tgetent(0, term_name) != 1)
	{
		return (1);
	}
	return (0);
}
