/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 02:00:08 by alan              #+#    #+#             */
/*   Updated: 2019/12/03 16:33:40 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FORMAT_H
# define FT_PRINTF_FORMAT_H

# define SHARP 0x1
# define ZERO 0x2
# define MINUS 0x4
# define PLUS 0x8
# define SPACE 0x10

# define CONVS "cCsS%dDiuUboOxXpfFeE"

typedef struct	s_format
{
	unsigned char	flags;
	int				width;
	int				precision;
	char			length;
	char			conv;
}				t_format;

void			format_init(t_format *fmt);

#endif
