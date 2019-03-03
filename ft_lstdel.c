/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:02:41 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/03 03:44:19 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** TODO make sure it doesn't matter that this function is recursive
** I'm worried that deleting large lists will flood the call stack with this
** recursive function, and maybe something bad will happen.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst) && (*alst)->next)
		ft_lstdel(&((*alst)->next), (*del));
	ft_lstdelone(alst, (*del));
}
