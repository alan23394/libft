/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_termcaps.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:11:23 by alan              #+#    #+#             */
/*   Updated: 2019/11/25 22:30:58 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERMCAPS_H
# define FT_TERMCAPS_H

# define TC_CLEAR "cl"
# define TC_ENABLE_ALT_SCREEN "ti"
# define TC_DISABLE_ALT_SCREEN "te"
# define TC_CURSOR_INVISIBLE "vi"
# define TC_CURSOR_VISIBLE "ve"
# define TC_CURSOR_MOVE "cm"
# define TC_LINES "li"
# define TC_COLS "co"

# define TCSTR_ENABLE_MOUSE_CLICK "\e[?1000h"
# define TCSTR_DISABLE_MOUSE_CLICK "\e[?1000l"

int		ft_tc_setup(void);

int		ft_tc_putchar(int c);

int		ft_tc_put(char *tc);
int		ft_tc_getnum(char *tc);
char	*ft_tc_getstr(char *tc);

int		ft_tc_cols(void);
int		ft_tc_lines(void);

int		ft_tc_cursor_move(unsigned int line, unsigned int col);

#endif
