/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:56:01 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/31 14:30:38 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*ptr;
	int		i;
	int		j;

	i = ft_strlen(s) - 1;
	j = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i--;
	while (s[j] == '\t' || s[j] == '\n' || s[j] == ' ')
		j++;
	ptr = ft_strsub(s, j, i - j + 1);
	return (ptr);
}
