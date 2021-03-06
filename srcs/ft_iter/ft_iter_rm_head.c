/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_rm_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:48:00 by alan              #+#    #+#             */
/*   Updated: 2019/12/08 02:04:15 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dnode.h"
#include "ft_iter.h"
#include "ft_mem.h"

void	*ft_iter_rm_head(struct s_iter *iter)
{
	void			*retptr;
	struct s_dnode	*rmptr;

	if (ft_iter_isempty(iter))
		return (0);
	rmptr = ft_iter_pop_head(iter);
	retptr = rmptr->content;
	ft_memdel((void **)&rmptr);
	return (retptr);
}
