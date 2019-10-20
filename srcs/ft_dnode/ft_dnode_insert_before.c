/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode_insert_before.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:08:45 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:10:33 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"

void	ft_dnode_insert_before(struct s_dnode *src, void *insert)
{
	struct s_dnode	*new_dnode;

	new_dnode = ft_dnode_init(insert, src, src->prev);
	if (!new_dnode)
		return ;
	if (src->prev)
	{
		src->prev->next = new_dnode;
	}
	src->prev = new_dnode;
}
