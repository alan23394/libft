/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:30:27 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 15:39:42 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_queue.h"
#include <stddef.h>

void			ft_queue_append(struct s_queue *queue, void *content,
					size_t content_size)
{
	struct s_node *new_node;

	new_node = ft_node_init(content, content_size, 0);
	if (!new_node)
		return ;
	if (ft_queue_isempty(queue))
	{
		queue->first = new_node;
		queue->last = new_node;
	}
	else
	{
		queue->last->next = new_node;
		queue->last = queue->last->next;
	}
}
