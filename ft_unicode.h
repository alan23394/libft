/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unicode.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 11:12:08 by alan              #+#    #+#             */
/*   Updated: 2019/03/05 11:19:36 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNICODE_H
# define FT_UNICODE_H

# include <stddef.h>

size_t	ft_wstrlen(const wchar_t *str);
char	*conv_utf8_str(wchar_t *wstr);
char	*conv_utf8_char(wchar_t wchar, char *str);

#endif
