/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:34:27 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 13:34:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

/*
** Make a variable arguments list
** Use ft_vprintfd for the rest
*/

int		ft_printfd(int fd, const char *format, ...)
{
	va_list		valist;
	size_t		total_len;

	va_start(valist, format);
	total_len = ft_vprintfd(fd, format, valist);
	va_end(valist);
	return (total_len);
}
