/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_rm_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:57:33 by alan              #+#    #+#             */
/*   Updated: 2019/11/12 03:28:38 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include "ft_mem.h"

void	*ft_iter_rm_tail(struct s_iter *iter)
{
	void			*retptr;
	struct s_dnode	*rmptr;

	if (ft_iter_isempty(iter))
		return (0);
	rmptr = iter->tail;
	retptr = iter->tail->content;
	if (iter->head == iter->tail)
	{
		iter->head = 0;
		iter->tail = 0;
		iter->cur = 0;
	}
	else
	{
		if (iter->cur == iter->tail)
			iter->cur = iter->cur->prev;
		iter->tail = iter->tail->prev;
		iter->tail->next = 0;
	}
	ft_memdel((void **)&rmptr);
	return (retptr);
}
