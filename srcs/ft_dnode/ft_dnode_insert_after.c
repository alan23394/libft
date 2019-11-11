/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode_insert_after.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:08:30 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 16:52:36 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include <stddef.h>

void	ft_dnode_insert_after(struct s_dnode *src, void *insert, size_t size)
{
	struct s_dnode	*new_dnode;

	new_dnode = ft_dnode_init(insert, size, src->next, src);
	if (!new_dnode)
		return ;
	if (src->next)
	{
		src->next->prev = new_dnode;
	}
	src->next = new_dnode;
}
