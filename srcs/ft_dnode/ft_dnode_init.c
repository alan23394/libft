/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:09:07 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:10:26 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include <stdlib.h>

struct s_dnode	*ft_dnode_init(void *content, struct s_dnode *next,
					struct s_dnode *prev)
{
	struct s_dnode	*new_dnode;

	new_dnode = (struct s_dnode *)malloc(sizeof(struct s_dnode));
	if (!new_dnode)
		return (0);
	new_dnode->content = content;
	new_dnode->next = next;
	new_dnode->prev = prev;
	return (new_dnode);
}
