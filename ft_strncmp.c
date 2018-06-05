/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 11:04:00 by abarnett          #+#    #+#             */
/*   Updated: 2018/06/05 10:06:31 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n - 1 > 0)
	{
		if (*s1 && *s2 && *s1 == *s2)
		{
			++s1;
			++s2;
		}
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
		--n;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
