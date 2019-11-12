/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tc_getnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 20:25:06 by alan              #+#    #+#             */
/*   Updated: 2019/11/06 18:20:05 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_termcaps.h"

int	ft_tc_lines(void)
{
	return (ft_tc_getnum(TC_LINES));
}

int	ft_tc_cols(void)
{
	return (ft_tc_getnum(TC_COLS));
}
