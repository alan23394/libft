/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordnequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:50:50 by alan              #+#    #+#             */
/*   Updated: 2019/04/07 15:53:48 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_word.h"

int		ft_wordnequ(const char *w1, const char *w2, int w2_len)
{
	int	w1_len;
	int	i;

	w1_len = ft_wordlen(w1);
	if (w1_len == w2_len)
	{
		i = 0;
		while (i < w1_len)
		{
			if (w1[i] == w2[i])
				++i;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
