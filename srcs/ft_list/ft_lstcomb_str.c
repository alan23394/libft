/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcomb_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:56:22 by alan              #+#    #+#             */
/*   Updated: 2019/04/24 05:46:09 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_string.h"
#include "ft_mem.h"

/*
** This function combines all the strings in a list
** It takes the total size to allocate, and then copies all the strings into
** the big buffer
*/

char			*ft_lstcomb_str(t_list *list, int size_of_list)
{
	char	*newstr;
	char	*cur;
	t_list	*lcur;

	if (!list)
		return (0);
	newstr = ft_strnew(size_of_list);
	cur = newstr;
	lcur = list;
	while (lcur)
	{
		ft_memcpy((void *)cur, lcur->content, lcur->content_size);
		cur += lcur->content_size;
		lcur = lcur->next;
	}
	return (newstr);
}
