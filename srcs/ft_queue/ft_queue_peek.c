/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:04:50 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 22:16:42 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_queue.h"

void			*ft_queue_peek(struct s_queue *queue)
{
	if (ft_queue_isempty(queue))
		return (0);
	return (queue->first->content);
}
