/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:26:02 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/23 18:37:56 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_format.h"
#include "ft_printf_flags.h"
#include "ft_printf_parse.h"
#include "ft_utils.h"
#include "ft_string.h"
#include "ft_list.h"

/*
** Must include:
** 	conversions:	sSpdDioOuUxXcC
**	must manage:	%%
**	flags:			#0-+ (and ' ');
**	must manage:	minimum field-width and precision
**	flags:			hh, h, l, ll, j, z
**
**	.___________________________________.
**	|conversion	|	length		|flags	|
**	|-----------+---------------+-------|
**	|	c		|				|		|
**	|	s		|				|		|
**	|	p		|				|		|
**	|-----------+---------------+-------|
**	|	d		| h, hh, l, ll	| 0-+s	|
**	|	i		| h, hh, l, ll	| 0-+s	|
**	|	o		| h, hh, l, ll	| 0-+s	|
**	|	u		| h, hh, l, ll	| 0-+s	|
**	|	x		| h, hh, l, ll	| 0-+s	|
**	|	X		| h, hh, l, ll	| 0-+s	|
**
** Bonuses include:
**	conversions:	eE, fF, gG, aA, n
**	flags:			*, %, L, '
**	new flags:
**		%b:		binary
**		%r:		non-printable characters
**		%k:		date in ISO format
**	colors, fd, etc..
*/

/*
** Static function to house my dispatch table, which takes the fmt_struct, and
** the valist. It returns the string that the conversion function makes.
**
** It doesn't need to make sure the character is valid, that is done in the
** calling function.
*/

static char		*dispatch(t_format *fmt_struct, va_list valist)
{
	static char	*(*p[127])() = {
		['c'] = flag_char,
		['C'] = flag_wchar,
		['s'] = flag_string,
		['S'] = flag_wstr,
		['%'] = flag_percent,
		['d'] = flag_int,
		['D'] = flag_int,
		['i'] = flag_int,
		['u'] = flag_uint,
		['U'] = flag_uint,
		['b'] = flag_bin,
		['o'] = flag_oct,
		['O'] = flag_oct,
		['x'] = flag_hex,
		['X'] = flag_hex,
		['p'] = flag_pointer,
		['f'] = flag_float,
		['F'] = flag_float,
		['e'] = flag_scientific,
		['E'] = flag_scientific,
	};

	return (p[(int)fmt_struct->conv](fmt_struct, valist));
}

/*
**	Parse takes a pointer to the format string at the format specifier so that
**	when it moves the pointer to the end of the format specifier, that change
**	can be reflected in the calling function.
**
**	I send in len because I'd just have to use strlen to get it later, when
**	I've already calculated it now
*/

static char		*parse(const char **format, va_list valist, size_t *len)
{
	t_format	fmt_struct;
	char		*str;

	format_init(&fmt_struct);
	get_flags(format, &fmt_struct);
	get_width_precis(format, &fmt_struct, valist);
	get_length(format, &fmt_struct);
	get_conversion(format, &fmt_struct);
	str = 0;
	if (fmt_struct.conv)
	{
		str = dispatch(&fmt_struct, valist);
		if (str)
			*len = (size_t)fmt_struct.width;
	}
	return (str);
}

/*
** Make a linked list of substrings using a format string and va_list
** Update the list with a double pointer
** Return the combined length of the substrings
**
**
** potential bug when malloc returns 0 from strndup, and whatever the length
** was supposed to be gets added, and potentially used for malloc in other
** printfs.
*/

size_t			make_list(t_list **list, const char *format, va_list valist)
{
	char	*sub;
	size_t	len;
	size_t	total_len;

	total_len = 0;
	while (format && *format)
	{
		if (*format == '%')
		{
			++format;
			sub = parse(&format, valist, &len);
			if (!sub)
				continue ;
		}
		else
		{
			len = ft_dstrlen(format, '%');
			sub = ft_strndup(format, len);
			format += len;
		}
		total_len += len;
		ft_lstadd_tail(list, ft_lstinit(sub, len));
	}
	return (total_len);
}
