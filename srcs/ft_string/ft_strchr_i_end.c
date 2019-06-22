/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_i_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:28:15 by alan              #+#    #+#             */
/*   Updated: 2019/06/20 21:39:48 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function works like strchr, but returns the index of the found
** character.
** If no such character is found, it returns the index at the end of the
** string.
*/

int	ft_strchr_i_end(const char *s, char c)
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
	return (i);
}
