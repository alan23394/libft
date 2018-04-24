/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 11:04:00 by abarnett          #+#    #+#             */
/*   Updated: 2018/04/23 17:01:31 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	// Is it necessary to check if they exist?
	// Is it faster with pointers instead of arrays?
	// #checklater
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
