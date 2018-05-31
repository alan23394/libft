/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:55:44 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 20:55:46 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;

	ret = malloc(sizeof(char) *\
				(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	ft_strcpy(ret, s1);
	ft_strcat(ret, s2);
	ft_strcat(ret, "\0");
	return (ret);
}
