/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:22:11 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 22:22:44 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dqueue.h"
#include <stdlib.h>

struct s_dqueue	*ft_dqueue_init(void)
{
	struct s_dqueue	*new_dqueue;

	new_dqueue = (struct s_dqueue *)malloc(sizeof(struct s_dqueue));
	if (!new_dqueue)
		return (0);
	new_dqueue->first = 0;
	new_dqueue->last = 0;
	return (new_dqueue);
}
