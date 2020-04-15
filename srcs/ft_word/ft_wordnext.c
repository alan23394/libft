/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:36:04 by alan              #+#    #+#             */
/*   Updated: 2020/03/18 03:18:41 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

/*
** This function returns a pointer to the start of the next word in a string.
** It skips all non-whitespace characters (i.e. the current word), and then
** skips all whitespace characters (up to the next word). It also stops at null
** terminators.
*/

const char	*ft_wordnext(const char *str)
{
	while (str && *str && !ft_isspace(*str))
	{
		++str;
	}
	while (str && *str && ft_isspace(*str))
	{
		++str;
	}
	return (str);
}
