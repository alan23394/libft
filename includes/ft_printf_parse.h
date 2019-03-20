/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:45:50 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 13:50:09 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PARSE_H
# define FT_PRINTF_PARSE_H

typedef struct	s_format t_format;

int				get_conversion(const char **format, t_format *fmt_struct);
void			get_length(const char **format, t_format *fmt_struct);
void			get_width_precis(const char **format, t_format *fmt_struct,
					va_list valist);
void			get_flags(const char **format, t_format *fmt_struct);

#endif
