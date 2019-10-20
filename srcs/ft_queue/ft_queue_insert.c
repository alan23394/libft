/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:02:51 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 22:14:59 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_queue.h"

void			ft_queue_insert(struct s_queue *queue, void *content,
					int (*cmp)(void *queue_content, void *ins_content))
{
	struct s_node	**cursor;
	struct s_node	*new_node;

	if (ft_queue_isempty(queue) || cmp(queue->last->content, content) < 1)
	{
		ft_queue_append(queue, content);
		return ;
	}
	cursor = &queue->first;
	while (*cursor)
	{
		if (cmp((*cursor)->content, content) >= 1)
		{
			new_node = ft_node_init(content, *cursor);
			*cursor = new_node;
			return ;
		}
		cursor = &(*cursor)->next;
	}
	ft_queue_append(queue, content);
}
