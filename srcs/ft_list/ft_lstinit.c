/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 02:43:24 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 03:40:50 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_mem.h"

/*
** This function exists to put a pointer into the list easily.
** content and content size get directly copied, instead of making new memory
*/

t_list	*ft_lstinit(void const *content, size_t content_size)
{
	t_list *head;

	head = (t_list *)ft_memalloc(sizeof(t_list));
	if (head == 0)
		return (0);
	head->content = (void *)content;
	head->content_size = content_size;
	head->next = 0;
	return (head);
}
