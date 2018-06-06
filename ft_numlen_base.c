/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:23:46 by abarnett          #+#    #+#             */
/*   Updated: 2018/06/06 16:27:57 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numlen_base(long num, int base)
{
	int length;

	length = 1;
	while (value >= base)
	{
		value /= base;
		++length;
	}
	return (length);
}
