/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:56:01 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 11:58:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;

	if (!s)
		return (0);
	i = ft_strlen(s) - 1;
	j = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i--;
	while (s[j] == '\t' || s[j] == '\n' || s[j] == ' ')
		j++;
	return (j < i ? ft_strsub(s, j, i - j + 1) : ft_strnew(0));
}
