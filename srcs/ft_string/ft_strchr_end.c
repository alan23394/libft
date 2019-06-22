/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 04:27:12 by alan              #+#    #+#             */
/*   Updated: 2019/06/20 21:38:34 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is the same as strchr, except it returns the end of the string
** instead of null.
*/

char	*ft_strchr_end(const char *s, char c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			return ((char *)(s));
		++s;
	}
	return ((char *)s);
}
