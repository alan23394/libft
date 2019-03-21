/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 01:04:20 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 01:10:50 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

/*
** This function returns the biggest int from variable arguments. The params
** variable is how many numbers it will compare.
*/

int		ft_vmax(int params, ...)
{
	va_list	nums;
	int		max;
	int		cur;

	va_start(nums, params);
	max = 0;
	if (params > 0)
	{
		max = va_arg(nums, int);
		while (--params)
		{
			cur = va_arg(nums, int);
			if (cur > max)
				max = cur;
		}
	}
	va_end(nums);
	return (max);
}
