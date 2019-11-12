/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queuecomb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 21:41:35 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 16:01:25 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_mem.h"

/*
** This function combines all the strings in a list
** It takes the total size to allocate, and then copies all the strings into
** the big buffer
*/

void			*ft_queuecomb(struct s_node *start, int total_size)
{
	void			*comb;
	unsigned char	*cur;
	struct s_node	*node;

	if (!start)
		return (0);
	comb = ft_memalloc(total_size);
	cur = (unsigned char *)comb;
	node = start;
	while (node)
	{
		ft_memcpy((void *)cur, node->content, node->content_size);
		cur += node->content_size;
		node = node->next;
	}
	return (comb);
}
