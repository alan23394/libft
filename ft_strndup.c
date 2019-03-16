/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 13:39:28 by alan              #+#    #+#             */
/*   Updated: 2019/03/16 13:39:40 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*dup;

	dup = ft_strnew(len);
	return (dup ? ft_strncpy(dup, s1, len) : 0);
}
