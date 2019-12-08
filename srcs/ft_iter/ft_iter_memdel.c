/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 23:29:26 by alan              #+#    #+#             */
/*   Updated: 2019/12/07 23:32:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iter.h"
#include "ft_mem.h"

/*
** This function uses memdel to delete the void pointer inside an iter node. It
** is useful if the content is just an allocated string, or a struct with no
** additional allocated members.
*/

void	ft_iter_memdel(void *content, size_t content_size)
{
	(void)content_size;
	ft_memdel(&content);
}
