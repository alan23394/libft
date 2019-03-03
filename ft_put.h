/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:10:40 by alan              #+#    #+#             */
/*   Updated: 2019/03/03 03:33:49 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H

/*
** TODO Make main functions the fd functions, normal ones call fd
** better than having duplicated code for each one
*/

void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
