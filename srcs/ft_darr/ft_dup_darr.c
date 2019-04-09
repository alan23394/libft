/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_darr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:10:36 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 05:12:41 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_darr.h"
#include "ft_mem.h"
#include "ft_string.h"

/*
** Count strings, and then fill in from the end going to the start
** Allocate strings + 1, for the null terminator
** Since strings is always technically one more than the actual index, we can
** set new_darr[len] to 0 for the null terminator
** while (len--) checks up to 1 being valid, then decreases it to 0, and
** then fills in the string. This works with how I count strings, starting at 1
** and filling down to 1 (technically filling to 0, but because I check before
** decrementing then it all works out).
*/

const char	**ft_dup_darr(const char **darr)
{
	int			len;
	const char	**new_darr;

	len = ft_count_strings(darr);
	new_darr = (const char **)ft_memalloc(sizeof(const char *) * (len + 1));
	new_darr[len] = 0;
	while (len--)
	{
		new_darr[len] = ft_strdup(darr[len]);
	}
	return (new_darr);
}
