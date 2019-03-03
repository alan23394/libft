/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 00:59:54 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 02:27:02 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

int					ft_max(int a, int b);
int					ft_min(int a, int b);

int					ft_vmax(int params, ...);
int					ft_vmin(int params, ...);

long				ft_abs(long nb);

long				ft_pow(int a, int b);
double				ft_pow_d(double a, int b);

int					ft_floor(double roundee);
int					ft_ceil(double roundee);

long				ft_round(double roundee);

#endif
