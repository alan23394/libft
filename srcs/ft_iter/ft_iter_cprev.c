/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_cprev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 20:51:29 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 20:57:06 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"

void	ft_iter_cprev(struct s_iter *iter)
{
	if (ft_iter_isempty(iter) || !iter->cur)
		return ;
	if (iter->cur == iter->head)
		iter->cur = iter->tail;
	else
		iter->cur = iter->cur->prev;
}
