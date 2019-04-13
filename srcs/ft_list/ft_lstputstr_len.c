/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputstr_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:03:57 by alan              #+#    #+#             */
/*   Updated: 2019/04/12 21:42:23 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

/*
** Same as ft_lstputstr, except it will print only the length of content_size
*/

void	ft_lstputstr_len(t_list *item)
{
	if (item && item->content)
	{
		write(1, (char *)item->content, item->content_size);
	}
}
