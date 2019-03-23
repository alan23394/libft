/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 12:05:01 by alan              #+#    #+#             */
/*   Updated: 2019/03/18 12:17:37 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_unumlen(unsigned long long num)
{
	size_t	length;

	length = 1;
	while (num >= 10)
	{
		num /= 10;
		++length;
	}
	return (length);
}
