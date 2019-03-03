/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:10:20 by abarnett          #+#    #+#             */
/*   Updated: 2018/12/14 18:25:54 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
		del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}

/*
** This function deletes the memory from the void pointer to content. It is
** meant to be used with lstdel. It ignores the content size, because there's
** nothing to do with it.
*/

void	ft_lstmemdel(void *content, size_t content_size)
{
	ft_memdel(&content);
	(void)content_size;
}
