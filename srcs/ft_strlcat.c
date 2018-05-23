/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:56:56 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/21 16:45:54 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const size_t src_length;
	const size_t dst_length;

	src_length = ft_strlen((char *)src);
	dst_length = ft_strlen(dst);
	if (dst_length >= dstsize)
		return (dst_length + src_length);
	dst += dst_length;
	dstsize -= (dst_length - 1);
	while (dstsize--)
		*dst++ = *src++;
	return (dst_length + src_length);
}
