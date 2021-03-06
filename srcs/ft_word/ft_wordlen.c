/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:57:22 by alan              #+#    #+#             */
/*   Updated: 2019/04/07 15:58:06 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int		ft_wordlen(const char *w)
{
	int	i;

	i = 0;
	if (w)
	{
		while (w[i] && !ft_isspace(w[i]))
			++i;
	}
	return (i);
}
