/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:28:25 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 08:37:27 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	char	*cur;

	if (!s || !f)
		return (0);
	str = ft_strnew(ft_strlen(s));
	cur = str;
	while (cur && *s)
		*cur++ = f(*s++);
	return (str);
}
