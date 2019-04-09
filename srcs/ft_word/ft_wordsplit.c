/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 23:52:41 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 02:24:25 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_word.h"
#include "ft_string.h"
#include "ft_mem.h"

char	**ft_wordsplit(const char *str)
{
	int		count;
	int		i;
	char	**words;

	count = ft_wordcount(str);
	if (!count)
		return (0);
	i = 0;
	words = (char **)ft_memalloc(sizeof(char *) * (count + 1));
	while (i < count)
	{
		words[i] = ft_worddup(str);
		str = ft_wordnext(str);
		++i;
	}
	words[i] = 0;
	return (words);
}
