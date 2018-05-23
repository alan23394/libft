/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 20:56:01 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 21:13:52 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*ptr;
	int		i;

	i = ft_strlen(s) - 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i--;
	i = ft_strlen(s) - i - 1;
	while (*s == '\t' || *s == '\n' || *s == ' ') 
		s++;
	ptr = (char *)malloc(sizeof(char *) * ((ft_strlen(s) - i) + 1));
	ft_strlcat(ptr, s, (ft_strlen(s) - i) + 1);
	return (sizeof(ptr) ? ptr - ft_strlen(ptr) : 0);
}
