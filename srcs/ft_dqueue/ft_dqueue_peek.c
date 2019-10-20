/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_peek.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:05:26 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:06:00 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_dqueue.h"

void			*ft_dqueue_peek(struct s_dqueue *dqueue)
{
	if (ft_dqueue_isempty(dqueue))
		return (0);
	return (dqueue->first->content);
}
