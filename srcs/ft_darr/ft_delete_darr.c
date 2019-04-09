/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_darr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 23:45:56 by alan              #+#    #+#             */
/*   Updated: 2019/04/07 23:48:39 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** This function deletes a null-terminated double array. It uses memdel on each
** pointer of the array. It assumes the last item of the array is null.
*/

void	ft_delete_darr(void **darr)
{
	int	i;

	if (!darr)
		return ;
	i = 0;
	while (darr[i])
	{
		ft_memdel((void **)&darr[i]);
		++i;
	}
	ft_memdel((void **)&darr);
}
