/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 11:22:25 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 20:42:24 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*dest_cursor;

	dest_cursor = s1;
	while (*dest_cursor)
		dest_cursor++;
	while (*s2)
		*dest_cursor++ = *s2++;
	*dest_cursor = '\0';
	return (s1);
}
