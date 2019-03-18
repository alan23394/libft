/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 12:10:29 by alan              #+#    #+#             */
/*   Updated: 2019/03/18 12:17:21 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** numlen base that works for unsigned numbers
** (for signed numbers, numlen counts the sign (i.e. -42 = 3 digits)
*/

size_t	ft_unumlen_base(unsigned long long num, int base)
{
	int length;

	length = 1;
	while (num >= (unsigned int)base)
	{
		num /= base;
		++length;
	}
	return (length);
}
