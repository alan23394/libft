/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:56:01 by abarnett          #+#    #+#             */
/*   Updated: 2019/04/08 01:47:03 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_string.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while (i <= j && ft_isspace(s[i]))
		i++;
	while (j >= i && ft_isspace(s[j]))
		j--;
	return (i <= j ? ft_strsub(s, i, (j - i) + 1) : ft_strnew(0));
}
