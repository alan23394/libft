/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_rm_cur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:40:38 by alan              #+#    #+#             */
/*   Updated: 2019/11/22 16:50:50 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include "ft_mem.h"

/*
** This function removes the current node, and relinks around it. It moves
** current to the next node, but not past the tail. It doesn't do anything with
** the content_size, which isn't all that terrible, but you should probably
** save it before removing the node if you actually care about it (the only
** time I really want it is if I've got strings as the void *, and the
** content_size is their length).
**
** By using the rm head and tail functions if it's head or tail, I only have to
** worry about freeing the node and relinking the two around it, since there
** will always be two around it.
*/

void	*ft_iter_rm_cur(struct s_iter *iter)
{
	void			*retptr;
	struct s_dnode	*rmptr;

	if (iter->cur == iter->head)
		return (ft_iter_rm_head(iter));
	else if (iter->cur == iter->tail)
		return (ft_iter_rm_tail(iter));
	rmptr = iter->cur;
	retptr = iter->cur->content;
	iter->cur->prev->next = iter->cur->next;
	iter->cur->next->prev = iter->cur->prev;
	iter->cur = iter->cur->next;
	ft_memdel((void **)&rmptr);
	return (retptr);
}
