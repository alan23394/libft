/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 21:58:41 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/21 16:34:48 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cur;
	char	*tmp;
	size_t	i;

	i = len;
	cur = (char*)dst;
	tmp = malloc(sizeof(char) * len);
	while (len--)
		*tmp++ = *(char *)src++;
	tmp -= i;
	while (i--)
		*cur++ = *tmp++;
	return (dst);
}
