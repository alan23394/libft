/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_add_head.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:20:10 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 21:25:51 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include <stddef.h>

void	ft_iter_add_head(struct s_iter *iter, void *content, size_t size)
{
	struct s_dnode *new_dnode;

	new_dnode = ft_dnode_init(content, size, 0, 0);
	if (!new_dnode)
		return ;
	if (ft_iter_isempty(iter))
	{
		iter->head = new_dnode;
		iter->tail = new_dnode;
		iter->cur = iter->head;
	}
	else
	{
		new_dnode->next = iter->head;
		iter->head->prev = new_dnode;
		iter->head = iter->head->prev;
	}
}
