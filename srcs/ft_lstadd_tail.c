/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 02:59:43 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 03:49:08 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** This function adds the new list item to the end of the list.
*/

void	ft_lstadd_tail(t_list **alst, t_list *item)
{
	t_list **cur;

	cur = alst;
	if (!*cur)
	{
		*cur = item;
		return ;
	}
	while ((*cur)->next)
		cur = &(*cur)->next;
	(*cur)->next = item;
}
