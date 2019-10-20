/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_isempty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:03:16 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:05:20 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dqueue.h"

int				ft_dqueue_isempty(struct s_dqueue *dqueue)
{
	if (!dqueue || (!dqueue->first && !dqueue->last))
		return (1);
	return (0);
}
