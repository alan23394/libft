/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 23:23:55 by alan              #+#    #+#             */
/*   Updated: 2019/12/08 02:05:17 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include "ft_mem.h"

void	ft_iter_del(struct s_iter **iter, void (*del)(void *, size_t))
{
	struct s_dnode	*node;

	while (!ft_iter_isempty(*iter))
	{
		node = ft_iter_pop_head(*iter);
		if (node)
		{
			del(node->content, node->content_size);
			ft_memdel((void **)&node);
		}
	}
	ft_memdel((void **)iter);
}
