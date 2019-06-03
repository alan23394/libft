/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path_filename.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 23:36:31 by alan              #+#    #+#             */
/*   Updated: 2019/06/02 23:37:29 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** This function returns a pointer to the last component of the path
** First set name to the last /
** If there wasn't a /, ft_strrchr will return 0
** If it didn't return 0, move name after the /
** If it did return zero, set it to the path
** Return name
*/

const char	*get_path_filename(const char *path)
{
	const char	*name;

	name = ft_strrchr(path, '/');
	if (name)
	{
		return (name + 1);
	}
	else
	{
		return (path);
	}
}
