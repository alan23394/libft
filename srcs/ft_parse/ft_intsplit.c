/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 02:00:43 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/16 00:00:14 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_word.h"
#include "ft_mem.h"
#include "ft_parse.h"

/*
** Splits integers out of a string separated by whitespace
*/

int	*ft_intsplit(const char *s, int *size)
{
	int	*ints;
	int	i;

	if (!s)
		return (0);
	*size = ft_wordcount(s);
	ints = (int *)ft_memalloc(sizeof(int) * *size);
	if (!ints)
		return (0);
	i = 0;
	while (i < *size)
	{
		ints[i] = ft_parse_num(&s);
		i++;
	}
	return (ints);
}
