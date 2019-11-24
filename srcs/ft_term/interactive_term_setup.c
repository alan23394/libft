/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_setup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 00:12:37 by alan              #+#    #+#             */
/*   Updated: 2019/11/24 00:18:32 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termios.h>

/*
** Set up terminal for an interactive application
**
** This function enables noncanonical mode, disables character echoing, and
** sets the minimum read characters to 1 with blocking read.
*/

void	interactive_term_setup(struct termios *term)
{
	term->c_lflag &= ~(ICANON|ECHO);
	term->c_cc[VMIN] = 1;
	term->c_cc[VTIME] = 0;
}
