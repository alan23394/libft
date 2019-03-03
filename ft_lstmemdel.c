/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmemdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 02:56:39 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 03:48:31 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

/*
** This function deletes the memory from the void pointer to content. It is
** meant to be used with lstdel. It ignores the content size, because there's
** nothing to do with it.
**
** I usually compile with -Wall -Wextra -Werror, so voiding content_size gets
** rid of the compiler error I get for having an unused parameter/variable.
*/

void	ft_lstmemdel(void *content, size_t content_size)
{
	(void)content_size;
	ft_memdel(&content);
}
