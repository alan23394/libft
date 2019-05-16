/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 03:13:31 by alan              #+#    #+#             */
/*   Updated: 2019/05/15 16:28:09 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

char	*ft_strnew(size_t size);
char	*ft_strinit(size_t size, int c);
void	ft_strdel(char **as);

size_t	ft_strlen(const char *str);
size_t	ft_dstrlen(const char *str, char del);

int		ft_str_is_num(const char *str);

char	*ft_strchr(const char *s, int c);
char	*ft_strchr_end(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strcmp_rev(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);

char	*ft_strtrim(const char *s);
void	ft_strclr(char *s);
void	ft_strupper(char *str);
void	ft_strapp(char *dst, char c);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	**ft_strsplit(const char *s, char c);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t len);

void	ft_striter(char*s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

#endif
