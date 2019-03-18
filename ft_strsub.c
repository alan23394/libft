/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:55:22 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 09:25:44 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	sub = ft_strnew(len);
	if (sub)
		ft_strncpy(sub, s + start, len);
	return (sub);
}
