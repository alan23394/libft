/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 19:45:40 by exam              #+#    #+#             */
/*   Updated: 2018/06/06 16:38:28 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	append_character(char *dest, char src)
{
	while (*dest)
		dest++;
	*dest++ = src;
	*dest = '\0';
}

static void	recursive_strfill_base(char *str, long num, int base)
{
	if (num >= base)
		recursive_strfill_base(str, num / base, base);
	if (base > 10 && (num % base) > 9)
		append_character(str, ('A' + (num % base) - 10));
	else
		append_character(str, ('0' + num % base));
}

char		*ft_itoa_base(int n, int base)
{
	char *str;
	long num;

	num = (long)n;
	if (num < 0 && num *= -1 && base == 10)
	{
		str = ft_strnew(ft_numlen_base(num, base) + 1);
		if (!str)
			return (0);
		*str = '-';
	}
	else
	{
		str = ft_strnew(ft_numlen_base(num, base));
		if (!str)
			return (0);
	}
	recursive_strfill_base(str, num, base);

	return (str);
}
