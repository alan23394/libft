/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:45:22 by abarnett          #+#    #+#             */
/*   Updated: 2018/06/02 18:33:06 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*cur;
	unsigned int	i;

	if (!s || !f)
		return (0);
	str = ft_strnew(ft_strlen(s));
	cur = str;
	i = 0;
	while (cur && i < ft_strlen(s))
		*cur++ = f(i++, *s);
	return (str);
}
