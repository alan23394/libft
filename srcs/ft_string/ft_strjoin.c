/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:55:44 by abarnett          #+#    #+#             */
/*   Updated: 2019/06/15 23:53:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		s1len;
	int		s2len;
	char	*ret;

	if (!s1 || !s2)
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ret = ft_strnew(s1len + s2len);
	if (ret)
	{
		ft_strncpy(ret, s1, s1len);
		ft_strncpy(ret + s1len, s2, s2len);
	}
	return (ret);
}
