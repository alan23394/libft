/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vmin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 01:11:03 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 01:25:49 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

/*
** This function returns the smallest int from variable arguments. The params
** variable is how many numbers it will compare.
*/

int		ft_vmin(int params, ...)
{
	va_list	nums;
	int		min;
	int		cur;

	va_start(nums, params);
	min = 0;
	if (params > 0)
	{
		min = va_arg(nums, int);
		while (--params)
		{
			cur = va_arg(nums, int);
			if (cur < min)
				min = cur;
		}
	}
	va_end(nums);
	return (min);
}
