/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 11:04:00 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 20:18:39 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	// Is it necessary to check if they exist?
	// Is it faster with pointers instead of arrays?
	// #checklater
	while (*s1 == *s2 && *s1 && *s2 && n--)
		;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
