/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 21:39:57 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 09:07:44 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

/*
** Converts a malloced string to uppercase
*/

void	ft_strupper(char *str)
{
	char	*cur;

	cur = str;
	while (cur && *cur)
	{
		*cur = ft_toupper(*cur);
		++cur;
	}
}
