/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:53:32 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 19:35:04 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (*haystack++ && len--)
	{
		while ((*haystack == *needle++) && *needle)
			i++;
		if (i == (size_t)ft_strlen((char *)needle))
			return ((char *)haystack - ft_strlen((char *)needle));
		needle = needle - i;
		i = 0;
	}
	return (0);
}
