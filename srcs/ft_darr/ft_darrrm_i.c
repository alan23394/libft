/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darrrm_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 05:22:59 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 05:46:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_darr.h"
#include "ft_mem.h"

/*
** This function takes the address of a double array, and an index to remove
** from it (starting at 0).
** It returns 0 if the index is out of the bounds of the array, or if it
** doesn't successfully create memory along the way. It tries to leave things
** as they were should something go wrong.
*/

const char	**ft_darrrm_i(const char ***darr, int i)
{
	int			len;
	const char	**new_darr;

	len = ft_count_strings(*darr);
	if (i < 0 || i >= len)
		return (0);
	--len;
	new_darr = (const char **)ft_memalloc(sizeof(const char *) * (len + 1));
	if (!new_darr)
		return (0);
	new_darr[len] = 0;
	while (len > 0)
	{
		--len;
		if (len < i)
			new_darr[len] = (*darr)[len];
		else
			new_darr[len] = (*darr)[len + 1];
	}
	ft_memdel((void **)darr);
	(*darr) = new_darr;
	return (new_darr);
}
