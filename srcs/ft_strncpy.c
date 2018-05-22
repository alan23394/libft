/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 21:13:52 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 21:29:45 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*dst_cursor;

	dst_cursor = dst;
	while (len-- && *src)
		*dst_cursor++ = *src++;
	if (len)
		ft_memset(dst_cursor, '\0', len);
	return (dst);
}
