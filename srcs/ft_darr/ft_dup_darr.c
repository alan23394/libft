/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_darr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:10:36 by alan              #+#    #+#             */
/*   Updated: 2019/04/05 15:59:34 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_darr.h"
#include "ft_mem.h"
#include "ft_string.h"

/*
** Count strings, and then fill in from the end going to the start
** Allocate strings + 1, for the null terminator
** Since strings is always technically one more than the actual index, we can
** set new_darr[strings] to 0 for the null terminator
** while (strings--) checks up to 1 being valid, then decreases it to 0, and
** then fills in the string. This works with how I count strings, starting at 1
** and filling down to 1 (technically filling to 0, but because I check before
** decrementing then it all works out).
*/

char	**ft_dup_darr(char **darr)
{
	int		strings;
	char	**new_darr;

	strings = ft_count_strings(darr);
	new_darr = (char **)ft_memalloc(sizeof(char *) * (strings + 1));
	new_darr[strings] = 0;
	while (strings--)
	{
		new_darr[strings] = ft_strdup(darr[strings]);
	}
	return (new_darr);
}
