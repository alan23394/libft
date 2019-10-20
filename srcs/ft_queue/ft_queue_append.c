/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:30:27 by alan              #+#    #+#             */
/*   Updated: 2019/10/20 01:11:37 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_queue.h"

void			ft_queue_append(struct s_queue *queue, void *content)
{
	struct s_node *new_node;

	new_node = ft_node_init(content, 0);
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
