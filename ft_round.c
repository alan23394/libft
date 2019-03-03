/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 04:11:14 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 02:24:58 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This only really works if the number fits within a long. It rounds up if the
** decimal place is greater than 5, otherwise it rounds down.
*/

long	ft_round(double roundee)
{
	long	rounded;

	if (roundee >= 0)
	{
		if ((roundee - (long)roundee) * 10 > 5)
			rounded = (long)roundee + 1;
		else
			rounded = (long)roundee;
	}
	else
	{
		if ((roundee - (long)roundee) * -10 > 5)
			rounded = (long)roundee - 1;
		else
			rounded = (long)roundee;
	}
	return (rounded);
}
