/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:14:30 by abarnett          #+#    #+#             */
/*   Updated: 2018/12/11 16:56:01 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_numlen_sign(long long num)
{
	size_t	length;

	length = 1;
	if (num < 0)
	{
		num *= -1;
		++length;
	}
	while (num >= 10)
	{
		num /= 10;
		++length;
	}
	return (length);
}

size_t		ft_numlen(long long num)
{
	size_t	length;

	length = 1;
	while (num >= 10 || num <= -10)
	{
		num /= 10;
		++length;
	}
	return (length);
}

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
