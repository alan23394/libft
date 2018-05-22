/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:53:24 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/15 13:56:48 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *neede)
{
	size_t	i;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (*haystack++)
	{
		while ((*haystack == *needle++) && *needle)
			i++;
		if (i == ft_strlen(needle))
			return ((char *)haystack - ft_strlen(needle));
		needle = needle - i;
		i = 0;
	}
	return (0);
}
