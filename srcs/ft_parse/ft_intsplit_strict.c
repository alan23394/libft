/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsplit_strict.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 02:00:43 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/29 11:41:36 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_string.h"
#include "ft_parse.h"

static int	contains_characters(const char *s)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 1)
	{
		--len;
		if (!(ft_isdigit(s[len]) || ft_isspace(s[len])))
			return (1);
	}
	return (0);
}

/*
** Splits integers out of a string of only integers separated by whitespace
** Will return 0 if the string contains characters
*/

int			*ft_intsplit_strict(const char *s, int *size)
{
	if (!s || contains_characters(s))
		return (0);
	return (ft_intsplit(s, size));
}
