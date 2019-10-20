/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_prepend.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:57:16 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:16:37 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_dqueue.h"

void	ft_dqueue_prepend(struct s_dqueue *dqueue, void *content)
{
	struct s_dnode	*new_dnode;

	new_dnode = ft_dnode_init(content, dqueue->first, 0);
	if (!new_dnode)
		return ;
	dqueue->first->prev = new_dnode;
	dqueue->first = new_dnode;
}
