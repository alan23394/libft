/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:09:07 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 16:50:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include <stddef.h>
#include <stdlib.h>

struct s_dnode	*ft_dnode_init(void *content, size_t content_size,
					struct s_dnode *next, struct s_dnode *prev)
{
	struct s_dnode	*new_dnode;

	new_dnode = (struct s_dnode *)malloc(sizeof(struct s_dnode));
	if (!new_dnode)
		return (0);
	new_dnode->content = content;
	new_dnode->content_size = content_size;
	new_dnode->next = next;
	new_dnode->prev = prev;
	return (new_dnode);
}
