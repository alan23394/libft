/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:50:17 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 18:02:48 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"
#include <stdlib.h>

struct s_queue	*ft_queue_init(void)
{
	struct s_queue	*new_queue;

	new_queue = (struct s_queue *)malloc(sizeof(struct s_queue));
	if (!new_queue)
		return (0);
	new_queue->first = 0;
	new_queue->last = 0;
	return (new_queue);
}
