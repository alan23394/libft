/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:04:56 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 22:16:56 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_queue.h"
#include <stdlib.h>

void			*ft_queue_pop(struct s_queue *queue)
{
	void			*retptr;
	struct s_node	*rmptr;

	if (ft_queue_isempty(queue))
		return (0);
	rmptr = queue->first;
	retptr = queue->first->content;
	if (queue->first == queue->last)
	{
		queue->first = 0;
		queue->last = 0;
	}
	else
	{
		queue->first = queue->first->next;
	}
	free(rmptr);
	return (retptr);
}
