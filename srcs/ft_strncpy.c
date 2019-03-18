/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 21:13:52 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/16 14:07:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*cur;

	cur = dst;
	while (len && *src)
	{
		*cur++ = *src++;
		--len;
	}
	if (len)
		ft_nmemset(cur, '\0', len);
	return (dst);
}
