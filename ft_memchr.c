/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:18:13 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/15 13:23:31 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*cur;

	cur = (char *)s;
	while (n--)
	{
		if (*cur == (unsigned char)c)
			return (cur);
		cur++;
	}
	return (0);
}
