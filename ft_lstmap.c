/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:11:06 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/03 04:01:25 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_mem.h"

/*
** TODO Make sure deleting the list like that doesn't cause problems
** It doesn't delete the list's void * content, just the t_list
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *item))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	tmp = f(lst);
	head = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (!tmp->next)
		{
			while (head)
			{
				tmp = head->next;
				ft_memdel((void **)&head);
				head = tmp;
			}
			return (0);
		}
		tmp = tmp->next;
	}
	return (head);
}
