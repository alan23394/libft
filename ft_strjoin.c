/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:55:44 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 09:25:53 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;

	if (!s1 || !s2)
		return (0);
	ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (ret)
	{
		ft_strcpy(ret, s1);
		ft_strcat(ret, s2);
	}
	return (ret);
}
