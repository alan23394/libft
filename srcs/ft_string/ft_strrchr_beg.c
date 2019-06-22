/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_beg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 21:19:20 by alan              #+#    #+#             */
/*   Updated: 2019/06/20 21:40:33 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr_beg(const char *s, char c)
{
	char	*cur;

	cur = ft_strrchr(s, c);
	if (!cur)
		return ((char *)s);
	return (cur);
}
