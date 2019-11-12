/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tc_setup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:19:23 by alan              #+#    #+#             */
/*   Updated: 2019/11/10 07:01:26 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include <term.h>

/*
** This function sets up termcaps by getting the terminal description with
** tgetent, using the terminal name stored in the TERM environment variable.
*/

/*
** int		ft_tc_setup(void)
** {
** 	char	*term_name;
** 
** 	if (!isatty(STDIN_FILENO))
** 	{
** 		//return (E_NOTATTY);
** 		return (1);
** 	}
** 	//PRINT_DEBUG("Setting up terminal");
** 	term_name = getenv("TERM");
** 	// TODO call this again to free memory maybe?
** 	if (tgetent(0, term_name) != 1)
** 	{
** 		return (1);
** 	}
** 	return (0);
** }
*/

int	ft_tc_setup(void)
{
	char	*term_name;

	if (!isatty(STDIN_FILENO))
	{
		return (1);
	}
	term_name = getenv("TERM");
	if (tgetent(0, term_name) != 1)
	{
		return (1);
	}
	return (0);
}
