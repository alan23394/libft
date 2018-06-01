/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:11:06 by abarnett          #+#    #+#             */
/*   Updated: 2018/06/01 14:51:41 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*map;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	tmp = f(lst);
	if (!(map = ft_lstnew(tmp->content, tmp->content_size)))
		return (0);
	head = map;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(map->next = ft_lstnew(tmp->content, tmp->content_size)))
		{
			ft_lstdel(head);
			return (0);
		}
		map = map->next;
		lst = lst->next;
	}
	return (head);
}
