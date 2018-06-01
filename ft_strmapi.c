/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:45:22 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/31 13:57:46 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*cur;
	unsigned int	i;

	str = ft_strnew(ft_strlen(s) + 1);
	cur = str;
	i = 0;
	while (cur && i < ft_strlen(s))
		*cur++ = f(i++, *s);
	return (str);
}
