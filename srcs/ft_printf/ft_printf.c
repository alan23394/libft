/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 23:12:22 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/20 15:26:01 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>

/*
** Make a variable argument list
** Use ft_vprintfd for the rest
*/

int		ft_printf(const char *format, ...)
{
	va_list		valist;
	size_t		total_len;

	va_start(valist, format);
	total_len = ft_vprintfd(1, format, valist);
	va_end(valist);
	return (total_len);
}
