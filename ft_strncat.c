/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 11:39:21 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 20:16:44 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*dest_cursor;

	dest_cursor = s1;
	while (*dest_cursor)
		dest_cursor++;
	while (n-- && *s2)
		*dest_cursor++ = *s2++;
	*dest_cursor = '\0';
	return (s1);
}
