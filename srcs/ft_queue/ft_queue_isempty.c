/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_isempty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:04:39 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 18:04:47 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

int				ft_queue_isempty(struct s_queue *queue)
{
	if (!queue || (!queue->first && !queue->last))
		return (1);
	return (0);
}
