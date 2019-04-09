/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_worddup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 02:19:31 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 02:23:01 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_word.h"
#include "ft_string.h"

char	*ft_worddup(const char *str)
{
	int		len;
	char	*new_str;

	len = ft_wordlen(str);
	if (!len)
		return (0);
	new_str = ft_strnew(len);
	ft_strncpy(new_str, str, len);
	return (new_str);
}
