/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:07 by abarnett          #+#    #+#             */
/*   Updated: 2019/04/07 22:50:36 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_word.h"

int	ft_wordcount(const char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		str = ft_wordnext(str);
		++count;
	}
	return (count);
}
