/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 19:45:40 by exam              #+#    #+#             */
/*   Updated: 2017/08/31 23:58:08 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length_of_base(long value, int base);
void	ft_strcat(char *dest, char src);
void	ft_putstr_base(char *str, long value, int base);

char	*ft_itoa_base(int value, int base)
{
	char *str;
	long num;

	num = (long)value;
	if (num < 0)
	{
		num *= -1;
		str = (char*)malloc(sizeof(char) * length_of_base(num, base) + 1);
		ft_strcat(str, '-');
	}
	else
		str = (char*)malloc(sizeof(char) * length_of_base(num, base));

	ft_putstr_base(str, num, base);

	return (str);
}

int		length_of_base(long value, int base)
{
	int length;

	length = 1;
	while (value >= base)
	{
		value /= base;
		length++;
	}
	return (length);
}

void	ft_strcat(char *dest, char src)
{
	while (*dest)
		dest++;
	*dest++ = src;
	*dest = '\0';
}

void	ft_putstr_base(char *str, long value, int base)
{
	if (value >= base)
		ft_putstr_base(str, value / base, base);
	if (base > 10 && (value % base) > 9)
	{
		ft_strcat(str, ('A' + (value % base) - 10));
	}
	else
		ft_strcat(str, ('0' + value % base));
}
