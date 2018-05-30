/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:49:53 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 20:53:16 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	while (n-- && *s1 == *s2 && *s1 && *s2)
		;
	return (((unsigned char)*s1 - (unsigned char)*s2) ? 0 : 1);
}
