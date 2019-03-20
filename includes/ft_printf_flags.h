/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 01:25:25 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 15:14:31 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FLAGS_H
# define FT_PRINTF_FLAGS_H

# include <stdarg.h>

/*
** Flag functions for the different conversion specifiers (%s, %d, etc)
*/

char	*flag_char(t_format *fmt, va_list valist);
char	*flag_wchar(t_format *fmt, va_list valist);
char	*flag_string(t_format *fmt, va_list valist);
char	*flag_wstr(t_format *fmt, va_list valist);
char	*flag_percent(t_format *fmt);
char	*flag_int(t_format *fmt, va_list valist);
char	*flag_uint(t_format *fmt, va_list valist);
char	*flag_bin(t_format *fmt, va_list valist);
char	*flag_oct(t_format *fmt, va_list valist);
char	*flag_hex(t_format *fmt, va_list valist);
char	*flag_pointer(t_format *fmt, va_list valist);
char	*flag_float(t_format *fmt, va_list valist);
char	*flag_scientific(t_format *fmt, va_list valist);

#endif
