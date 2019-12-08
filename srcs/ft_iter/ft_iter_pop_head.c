/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_pop_head.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 02:03:13 by alan              #+#    #+#             */
/*   Updated: 2019/12/08 02:05:40 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"

struct s_dnode	*ft_iter_pop_head(struct s_iter *iter)
{
	struct s_dnode	*retptr;

	if (ft_iter_isempty(iter))
		return (0);
	retptr = iter->head;
	if (iter->head == iter->tail)
	{
		iter->head = 0;
		iter->tail = 0;
		iter->cur = 0;
	}
	else
	{
		if (iter->cur == iter->head)
			iter->cur = iter->cur->next;
		iter->head = iter->head->next;
		iter->head->prev = 0;
	}
	return (retptr);
}
