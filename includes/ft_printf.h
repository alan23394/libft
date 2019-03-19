/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:47:21 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/19 01:27:06 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define SHARP 0x1
# define ZERO 0x2
# define MINUS 0x4
# define PLUS 0x8
# define SPACE 0x10

# define CONVS "cCsS%dDiuUboOxXpfFeE"

typedef struct		s_format
{
	unsigned char	flags;
	int				width;
	int				precision;
	char			length;
	char			conv;
}					t_format;

/*
** parse functions
*/

int					get_conversion(const char **format, t_format *fmt_struct);
void				get_length(const char **format, t_format *fmt_struct);
void				get_width_precis(const char **format, t_format *fmt_struct,
						va_list valist);
void				get_flags(const char **format, t_format *fmt_struct);

/*
** make list functions
*/

size_t				make_list(t_list **list, const char *format,
							va_list valist);
char				*combine_list(t_list *list, int size_of_list);

/*
** printf functions
*/

int					ft_printf(const char *format, ...);
int					ft_printfd(int fd, const char *format, ...);
int					ft_sprintf(char **str, const char *format, ...);

#endif
