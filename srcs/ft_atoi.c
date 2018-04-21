/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 06:08:58 by abarnett          #+#    #+#             */
/*   Updated: 2018/04/21 07:20:49 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	flag;

	i = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		flag = (*str++ == '-' ? -1 : 1);
	while (ft_isdigit(*str))
	{
		i *= 10;
		i += (*str++ - 48);
	}
	return (i * flag);
}
