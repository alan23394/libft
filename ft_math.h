/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 00:59:54 by alan              #+#    #+#             */
/*   Updated: 2019/03/18 12:26:17 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

typedef union		u_double
{
	double			d;
	long			l;
}					t_double;

typedef	struct		s_fp
{
	long			integral;
	long			fraction;
	int				len_i;
	int				trail_zeros;
	int				lead_zeros;
	int				len_f;
}					t_fp;

# define SIG_F (f.lead_zeros + f.len_f)
# define SIG_I (f.len_i + f.trail_zeros)

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

char				*ft_ftoa(double nb, int precision);
char				*ft_ftosn(double nb, int precision);

#endif
