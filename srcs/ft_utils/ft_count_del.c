/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:07 by abarnett          #+#    #+#             */
/*   Updated: 2019/04/07 22:45:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_del(const char *str, char del)
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
