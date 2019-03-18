/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:23:46 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 12:16:34 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** numlen that works for numbers in any base
** (for signed numbers, numlen counts the sign (i.e. -42 = 3 digits)
** (if you care, use absolute value)
*/

size_t	ft_numlen_base(long long num, int base)
{
	int length;

	length = 1;
	if (num < 0)
	{
		num *= -1;
		++length;
	}
	while (num >= base)
	{
		num /= base;
		++length;
	}
	return (length);
}
