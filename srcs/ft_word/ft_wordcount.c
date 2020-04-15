/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:07 by abarnett          #+#    #+#             */
/*   Updated: 2020/03/18 03:20:11 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_word.h"
#include "ft_utils.h"

/*
** Counts the amount of words in a string
** Skips leading whitespace
*/

int	ft_wordcount(const char *str)
{
	int count;

	count = 0;
	str = ft_skipspace(str);
	while (*str)
	{
		str = ft_wordnext(str);
		++count;
	}
	return (count);
}
