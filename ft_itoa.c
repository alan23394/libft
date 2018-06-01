/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:05:09 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/31 15:43:40 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	recursive_strfill(char *str, long num)
{
	if (num >= 10)
		recursive_strfill(str, num / 10);
	str[ft_strlen(str)] = (char)('0' + num % 10);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	num;

	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		str = ft_strnew(ft_numlen(num) + 1);
		ft_strcat(str, (const char *)'-');
	}
	else
		str = ft_strnew(ft_numlen(num));
	recursive_strfill(str, num);
	return (str);
}
