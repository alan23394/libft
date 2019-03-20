/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintfd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:35:59 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 15:26:36 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_string.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/*
** Takes a variable argument list, does not call va_start or va_end
** Use ft_vsprintf to make the string
** Print it to a file descriptor
** Free the string
*/

int		ft_vprintfd(int fd, const char *format, va_list valist)
{
	size_t		total_len;
	char		*str;

	total_len = ft_vsprintf(&str, format, valist);
	write(fd, str, total_len);
	ft_strdel(&str);
	return (total_len);
}
