/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 09:02:51 by alan              #+#    #+#             */
/*   Updated: 2019/04/17 03:13:17 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <stddef.h>

int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isspace(int c);
const char	*ft_skipspace(const char *);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_count_del(const char *str, char del);
size_t		ft_numlen(long long num);
size_t		ft_unumlen(unsigned long long num);
size_t		ft_numlen_base(long long num, int base);
size_t		ft_unumlen_base(unsigned long long num, int base);

int			ft_atoi(char *str);
char		*ft_itoa(int n);
char		*ft_itoa_base(int n, int base);

#endif
