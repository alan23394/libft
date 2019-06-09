/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 12:09:46 by abarnett          #+#    #+#             */
/*   Updated: 2019/06/09 01:26:45 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifdef LIBFT_SAFE

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (*str++)
	{
		i++;
	}
	return (i);
}

#else

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

#endif
