/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 12:09:46 by abarnett          #+#    #+#             */
/*   Updated: 2019/04/17 12:02:13 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_safety.h"

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
