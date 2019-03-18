/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:13:31 by alan              #+#    #+#             */
/*   Updated: 2019/03/18 07:28:00 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

char	*ft_strnew(size_t size);
char	*ft_strinit(size_t size, int c);
void	ft_strdel(char **as);

size_t	ft_strlen(const char *str);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t len);

#endif
