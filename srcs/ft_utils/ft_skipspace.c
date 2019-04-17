/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 03:11:05 by alan              #+#    #+#             */
/*   Updated: 2019/04/17 03:12:27 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

const char	*ft_skipspace(const char *str)
{
	if (str)
	{
		while (*str && ft_isspace(*str))
			++str;
	}
	return (str);
}
