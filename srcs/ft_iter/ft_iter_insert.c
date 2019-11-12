/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:40:06 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 19:30:41 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include <stddef.h>

void	ft_iter_insert(struct s_iter *iter, void *content, size_t size,
			int (*cmp)(void *a, void *b))
{
	struct s_dnode	*cursor;

	if (ft_iter_isempty(iter) || cmp(iter->tail->content, content) < 1)
	{
		ft_iter_add_tail(iter, content, size);
		return ;
	}
	if (cmp(iter->head->content, content) >= 1)
	{
		ft_iter_add_head(iter, content, size);
		return ;
	}
	cursor = iter->head;
	while (cursor->next)
	{
		if (cmp(cursor->next->content, content) >= 1)
		{
			ft_dnode_insert_after(cursor, content, size);
			return ;
		}
		cursor = cursor->next;
	}
	ft_iter_add_tail(iter, content, size);
}
