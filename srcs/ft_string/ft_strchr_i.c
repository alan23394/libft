/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:17:43 by alan              #+#    #+#             */
/*   Updated: 2019/05/16 14:28:37 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function works like strchr, but returns the index of the found
** character.
** If no such character is found, it returns -1.
*/

int	ft_strchr_i(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		++i;
	}
	return ((char)c == '\0' ? i : -1);
}
