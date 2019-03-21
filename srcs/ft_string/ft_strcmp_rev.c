/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 11:03:49 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 08:00:59 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** Does the exact same thing as regular strcmp, but returns the reverse result
** instead, for sorting reverse alphabetically.
*/

int	ft_strcmp_rev(const char *s1, const char *s2)
{
	return (ft_strncmp(s2, s1, ft_strlen(s1) + 1));
}
