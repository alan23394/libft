/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 14:00:48 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 14:03:10 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_format.h"

void	format_init(t_format *fmt)
{
	fmt->flags = 0;
	fmt->width = 0;
	fmt->precision = -1;
	fmt->length = 0;
	fmt->conv = 0;
}
