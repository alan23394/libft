/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:45:22 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 20:46:37 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
	i = ft_strlen(s);
	while (i)
		*str++ = f(*s++, i--);
	*str = '\0';
	return (str);
}
