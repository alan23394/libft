/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:51:11 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 02:19:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WORD_H
# define FT_WORD_H

int			ft_wordlen(const char *w);

int			ft_wordcount(const char *str);

char		*ft_worddup(const char *str);

int			ft_wordequ(const char *w1, const char *w2);
int			ft_wordnequ(const char *w1, const char *w2, int w2_len);

const char	*ft_wordnext(const char *str);

char		**ft_wordsplit(const char *str);

#endif
