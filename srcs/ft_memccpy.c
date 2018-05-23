/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 19:24:37 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 22:29:40 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_cursor;
	unsigned char	*src_cursor;
	
	dst_cursor = (unsigned char*)dst;
	src_cursor = (unsigned char*)src;
	while (n--)
	{
		*dst_cursor++ = *src_cursor++;
		if (*dst_cursor - 1 == (unsigned char)c)
			return (dst_cursor);
	}
	return ((void*)0);
}
