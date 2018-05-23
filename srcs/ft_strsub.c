/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:55:22 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 20:55:31 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(sizeof(char) * (len + 1));
	ft_strncpy(sub, s + start, len);
	return (sub);
}
