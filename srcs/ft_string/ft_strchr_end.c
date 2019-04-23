/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 04:27:12 by alan              #+#    #+#             */
/*   Updated: 2019/04/23 04:32:27 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is the same as strchr, except it returns the end of the string
** instead of null.
*/

char	*ft_strchr_end(const char *s, int c)
{
	while (s && *s)
	{
		if (*s == (char)c)
			return ((char *)(s));
		++s;
	}
	return ((char *)s);
}
