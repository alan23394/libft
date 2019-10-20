/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_pop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:06:10 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:08:17 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_dqueue.h"
#include <stdlib.h>

void			*ft_dqueue_pop(struct s_dqueue *dqueue)
{
	void			*retptr;
	struct s_dnode	*rmptr;

	if (ft_dqueue_isempty(dqueue))
		return (0);
	rmptr = dqueue->first;
	retptr = dqueue->first->content;
	if (dqueue->first == dqueue->last)
	{
		dqueue->first = 0;
		dqueue->last = 0;
	}
	else
	{
		dqueue->first = dqueue->first->next;
		dqueue->first->prev = 0;
	}
	free(rmptr);
	return (retptr);
}
