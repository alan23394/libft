/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:22:52 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:03:10 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_dqueue.h"

void	ft_dqueue_insert(struct s_dqueue *dqueue, void *content,
			int (*cmp)(void *dqueue_content, void *ins_content))
{
	struct s_dnode	*cursor;

	if (ft_dqueue_isempty(dqueue) || cmp(dqueue->last->content, content) < 1)
	{
		ft_dqueue_append(dqueue, content);
		return ;
	}
	if (cmp(dqueue->first->content, content) >= 1)
	{
		ft_dqueue_prepend(dqueue, content);
		return ;
	}
	cursor = dqueue->first;
	while (cursor->next)
	{
		if (cmp(cursor->next->content, content) >= 1)
		{
			ft_dnode_insert_after(cursor, content);
			return ;
		}
		cursor = cursor->next;
	}
	ft_dqueue_append(dqueue, content);
}
