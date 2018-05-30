/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:11:06 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/26 10:18:48 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;

	if (lst == 0)
		return (0);
	head = lst;
	while (lst->next)
	{
		if ((*f)(lst) == 0)
		{
			// do some freeing
			return (0);
		}
		lst = lst->next;
	}
	return (head);
}
