/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_rm_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:31:11 by alan              #+#    #+#             */
/*   Updated: 2019/12/05 22:22:05 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include "ft_mem.h"

void	*ft_iter_rm_node(struct s_iter *iter, struct s_dnode *node)
{
	void			*retptr;
	struct s_dnode	*rmptr;

	if (ft_iter_isempty(iter) || !node)
		return (0);
	if (node == iter->cur)
		return (ft_iter_rm_cur(iter));
	else if (node == iter->head)
		return (ft_iter_rm_head(iter));
	else if (node == iter->tail)
		return (ft_iter_rm_tail(iter));
	rmptr = node;
	retptr = node->content;
	node->prev->next = node->next;
	node->next->prev = node->prev;
	ft_memdel((void **)&rmptr);
	return (retptr);
}
