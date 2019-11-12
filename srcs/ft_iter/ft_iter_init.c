/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:45:51 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 16:46:06 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iter.h"
#include "ft_mem.h"

struct s_iter	*ft_iter_init(void)
{
	struct s_iter	*new_iter;

	new_iter = (struct s_iter *)ft_memalloc(sizeof(struct s_iter));
	new_iter->head = 0;
	new_iter->tail = 0;
	new_iter->cur = 0;
	return (new_iter);
}
