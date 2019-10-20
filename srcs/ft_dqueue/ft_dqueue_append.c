/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:20:13 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:53:41 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dqueue.h"
#include "ft_dnode.h"

void			ft_dqueue_append(struct s_dqueue *dqueue, void *content)
{
	struct s_dnode *new_dnode;

	new_dnode = ft_dnode_init(content, 0, 0);
	if (!new_dnode)
		return ;
	if (ft_dqueue_isempty(dqueue))
	{
		dqueue->first = new_dnode;
		dqueue->last = new_dnode;
	}
	else
	{
		new_dnode->prev = dqueue->last;
		dqueue->last->next = new_dnode;
		dqueue->last = dqueue->last->next;
	}
}
