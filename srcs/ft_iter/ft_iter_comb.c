/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_comb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 21:41:35 by alan              #+#    #+#             */
/*   Updated: 2019/11/12 03:27:29 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_mem.h"

/*
** This function combines all the strings/memory in a list
** It takes the total size to allocate, and then copies all the strings into
** the big buffer
** TODO This function only needs to exist in the node implementations
*/

void	*ft_iter_comb(struct s_dnode *start, int total_size)
{
	void			*comb;
	unsigned char	*cur;
	struct s_dnode	*node;

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
