/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_file.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 13:55:41 by alan              #+#    #+#             */
/*   Updated: 2019/03/19 00:12:26 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_FILE_H
# define FT_GNL_FILE_H

typedef struct	s_gnl_file
{
	int			fd;
	char		*buf;
}				t_gnl_file;

t_gnl_file		*new_gnl_file(int fd);

#endif
