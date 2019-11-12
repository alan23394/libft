/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_rm_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:48:00 by alan              #+#    #+#             */
/*   Updated: 2019/11/12 03:28:32 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include "ft_mem.h"

void	*ft_iter_rm_head(struct s_iter *iter)
{
	void			*retptr;
	struct s_dnode	*rmptr;

	if (ft_iter_isempty(iter))
		return (0);
	rmptr = iter->head;
	retptr = iter->head->content;
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
	ft_memdel((void **)&rmptr);
	return (retptr);
}
