/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_gnl_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 14:07:05 by alan              #+#    #+#             */
/*   Updated: 2019/03/19 00:39:01 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_gnl_file.h"

t_gnl_file	*new_gnl_file(int fd)
{
	t_gnl_file	*file;

	file = (t_gnl_file *)ft_memalloc(sizeof(t_gnl_file));
	if (!file)
		return (0);
	file->fd = fd;
	file->buf = 0;
	return (file);
}
