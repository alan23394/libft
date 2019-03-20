/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:34:48 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 15:25:04 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>

/*
** Make a variable arguments list
** Pass it to ft_vsprintf
*/

int		ft_sprintf(char **str, const char *format, ...)
{
	va_list		valist;
	size_t		total_len;

	va_start(valist, format);
	total_len = ft_vsprintf(str, format, valist);
	va_end(valist);
	return (total_len);
}
