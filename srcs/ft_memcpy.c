/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 13:23:29 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 20:41:34 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cursor;
	unsigned char	*src_cursor;
	
	dst_cursor = (unsigned char*)dst;
	src_cursor = (unsigned char*)src;
	while (n--)
		*dst_cursor++ = *src_cursor++;
	return (dst);
}
