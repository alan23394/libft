/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:11:06 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/31 17:04:41 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*ret;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	tmp = f(lst);
	if (!(ret = ft_lstnew(tmp->content, tmp->content_size)))
		return (0);
	lst = lst->next;
	head = ret;
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
