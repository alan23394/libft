/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 12:48:31 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/03 03:49:47 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

size_t	ft_lstlen(t_list *head)
{
	size_t	len;

	len = 0;
	while (head && head->content)
	{
		head = head->next;
		++len;
	}
	return (len);
}
