/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstputstr_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:03:57 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 03:52:08 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

/*
** Same as ft_lstputstr, except it will print a specific length
*/

void	ft_lstputstr_len(t_list *item)
{
	if (item && item->content)
	{
		write(1, (char *)item->content, item->content_size);
	}
}
