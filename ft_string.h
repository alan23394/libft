/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:13:31 by alan              #+#    #+#             */
/*   Updated: 2019/03/05 11:23:17 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

char	*ft_strnew(size_t size);
char	*ft_strinit(size_t size, int c);
void	ft_strdel(char **as);

size_t	ft_strlen(const char *str);

#endif
