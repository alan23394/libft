/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:52:19 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/21 16:35:04 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = malloc(sizeof(char *) * (ft_strlen((char *)s1) + 1));
	while (*s1)
		*dup++ = *s1++;
	*dup = '\0';
	return (dup - ft_strlen((char *)s1));
}
