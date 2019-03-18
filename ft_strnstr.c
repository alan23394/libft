/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:53:32 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 07:58:10 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_mem.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && (int)(len - ft_strlen(needle) + 1) > 0)
	{
		if (!ft_memcmp(haystack, needle, ft_strlen(needle)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
