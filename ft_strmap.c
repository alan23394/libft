/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:28:25 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/26 10:09:04 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;

	str = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
	while (*s)
		*str++ = f(*s);
	*str = '\0';
	return (str);
}
