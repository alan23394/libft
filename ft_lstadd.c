/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:21:40 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/03 03:48:44 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** This function simply puts the new list item at the front of the list.
*/

void	ft_lstadd(t_list **alst, t_list *item)
{
	item->next = *alst;
	*alst = item;
}
