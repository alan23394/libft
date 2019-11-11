/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:30:14 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 17:49:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_node.h"
#include "ft_mem.h"

struct s_node	*ft_node_init(void *content, struct s_node *next)
{
	struct s_node	*new_node;

	new_node = (struct s_node *)ft_memalloc(sizeof(struct s_node));
	if (!new_node)
		return (0);
	new_node->content = content;
	new_node->next = next;
	return (new_node);
}
