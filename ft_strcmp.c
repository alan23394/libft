/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 11:03:49 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 20:12:21 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	// Is it necessary to check if they exist?
	// #checklater
	while (*s1 == *s2 && *s1 && *s2)
		;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
