/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:13:31 by alan              #+#    #+#             */
/*   Updated: 2019/03/16 13:38:43 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

char	*ft_strnew(size_t size);
char	*ft_strinit(size_t size, int c);
void	ft_strdel(char **as);

char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t len);

size_t	ft_strlen(const char *str);

#endif
