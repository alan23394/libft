/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darradd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 04:24:13 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 05:08:35 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_darr.h"
#include "ft_mem.h"

/*
** This function allocates a new double array, size one bigger than the one
** passed, and inserts string add at the end of the array. It copies the
** pointers from one into the other, to save on reallocation. It deletes the
** double array passed in, and sets it to the new array (and also returns the
** new array).
*/

const char	**ft_darradd(const char ***darr, const char *add)
{
	const char	**new_darr;
	int			len;

	len = ft_count_strings(*darr);
	new_darr = (const char **)ft_memalloc(sizeof(const char *) * (len + 2));
	if (!new_darr)
	{
		return (0);
	}
	new_darr[len + 1] = 0;
	new_darr[len] = add;
	while (len > 0)
	{
		--len;
		new_darr[len] = (*darr)[len];
	}
	ft_memdel((void **)darr);
	*darr = new_darr;
	return (new_darr);
}
