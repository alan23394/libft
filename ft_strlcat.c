/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:56:56 by abarnett          #+#    #+#             */
/*   Updated: 2018/06/04 19:06:44 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len >= dstsize)
		return (dstsize + ft_strlen(src));
	ft_strncpy(dst + len, src, dstsize - len - 1);
	return (len + ft_strlen(src));
}
