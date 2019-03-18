/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:07 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 12:36:21 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words(const char *str, char del)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str != del)
		{
			count++;
			while (*str && *str != del)
				str++;
		}
		else
			str++;
	}
	return (count);
}
