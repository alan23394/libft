/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:56:25 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/18 07:26:44 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** TODO remove this include!
** Some functions still need stdlib in here, but remove it soon!
*/

# include <stdlib.h>

/*
** Eventually I should be able to get stddef out of here.
** It is needed for all the prototypes with size_t.
*/

# include <stddef.h>

# include "ft_put.h"
# include "ft_string.h"
# include "ft_mem.h"
# include "ft_list.h"
# include "ft_binarytree.h"
# include "ft_unicode.h"
# include "ft_math.h"

// # define INTMAX 2147483647
// # define INTMIN -2147483648

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

int					ft_isspace(int c);
int					ft_atoi(char *str);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_strupper(char *str);

void				ft_strclr(char *s);
void				ft_striter(char*s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s);
int					ft_count_words(const char *str, char del);
size_t				ft_dstrlen(const char *str, char del);
char				**ft_strsplit(const char *s, char c);
size_t				ft_numlen_sign(long long num);
size_t				ft_numlen(long long num);
size_t				ft_unumlen(unsigned long long num);
size_t				ft_numlen_sign_base(long long num, int base);
size_t				ft_numlen_base(long long num, int base);
size_t				ft_unumlen_base(unsigned long long num, int base);
void				ft_strapp(char *dst, char c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
char				*ft_ftoa(double nb, int precision);
char				*ft_ftosn(double nb, int precision);

#endif
