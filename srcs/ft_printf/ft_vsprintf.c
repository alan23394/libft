/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:38:35 by alan              #+#    #+#             */
/*   Updated: 2019/03/28 21:13:54 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_parse.h"
#include "ft_list.h"
#include <stdarg.h>
#include <stddef.h>

/*
** Takes an already started variable argument list
** It does not call va_start or va_end
** Generate a linked list of substrings from format
** Combine them into the string that was passed
** Free the list
*/

int		ft_vsprintf(char **str, const char *format, va_list valist)
{
	t_list		*strings;
	size_t		total_len;

	strings = 0;
	total_len = make_list(&strings, format, valist);
	*str = ft_lstcomb_str(strings, total_len);
	ft_lstdel(&strings, ft_lstmemdel);
	return (total_len);
}
