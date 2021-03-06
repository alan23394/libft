/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 00:43:25 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/29 11:29:49 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H

int	ft_parse_num(const char **str);

int	*ft_intsplit(const char *s, int *size);
int	*ft_intsplit_strict(const char *s, int *size);

#endif
