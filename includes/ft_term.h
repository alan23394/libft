/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 23:03:56 by alan              #+#    #+#             */
/*   Updated: 2019/11/16 07:20:08 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

#include <termios.h>

struct	s_terms
{
	struct termios	old_term;
	struct termios	new_term;
};

int		init_terms(int (setup_new_term(struct termios *term)));
void	delete_terms(void);
int		ft_term_switch_old(void);
int		ft_term_switch_new(void);

#endif
