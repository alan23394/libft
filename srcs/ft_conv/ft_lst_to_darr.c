/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_darr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 04:52:01 by alan              #+#    #+#             */
/*   Updated: 2019/04/22 05:20:52 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_mem.h"

const char		**ft_lst_to_darr(t_list *list)
{
	size_t		len;
	const char	**new_darr;
	size_t		i;

	len = ft_lstlen(list);
	new_darr = (const char **)ft_memalloc(sizeof(const char *) * (len + 1));
	new_darr[len] = 0;
	i = 0;
	while (i < len)
	{
		new_darr[i] = (const char *)list->content;
		++i;
		list = list->next;
	}
	return (new_darr);
}
