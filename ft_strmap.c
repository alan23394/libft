/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:28:25 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/31 13:57:49 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	char	*cur;

	str = ft_strnew(ft_strlen(s) + 1);
	cur = str;
	while (cur && *s)
		*cur++ = f(*s++);
	return (str);
}
