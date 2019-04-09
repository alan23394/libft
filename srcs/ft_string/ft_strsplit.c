/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 21:14:13 by abarnett          #+#    #+#             */
/*   Updated: 2019/04/07 22:51:15 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_utils.h"
#include "ft_mem.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**words;
	int		count;
	int		i;

	if (!s)
		return (0);
	count = ft_count_del(s, c);
	words = (char **)ft_memalloc(sizeof(char *) * (count + 1));
	if (!words)
		return (0);
	i = 0;
	while (count--)
	{
		while (*s && *s == c)
			s++;
		words[i] = ft_strsub(s, 0, ft_dstrlen(s, c));
		if (words[i] == 0)
			return (0);
		s = s + ft_dstrlen(s, c);
		i++;
	}
	words[i] = 0;
	return (words);
}
