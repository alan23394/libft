/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:47:21 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/20 14:02:51 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include "ft_printf_format.h"

/*
** make list functions
*/

size_t				make_list(t_list **list, const char *format,
							va_list valist);

/*
** printf functions
*/

int					ft_printf(const char *format, ...);
int					ft_printfd(int fd, const char *format, ...);
int					ft_sprintf(char **str, const char *format, ...);
int					ft_vprintfd(int fd, const char *format, va_list valist);
int					ft_vsprintf(char **str, const char *format, va_list valist);

#endif
