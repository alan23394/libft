/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:02:34 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 03:51:45 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_put.h"

/*
** Only really useful if used with ft_lstiter.
** Will print a (char *) from the list content.
*/

void	ft_lstputstr(t_list *item)
{
	if (item && item->content)
	{
		ft_putstr((char *)item->content);
	}
}
