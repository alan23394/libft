/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:32:53 by alan              #+#    #+#             */
/*   Updated: 2019/12/05 22:13:08 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITER_H
# define FT_ITER_H

# include <stddef.h>

struct s_dnode;

struct			s_iter
{
	struct s_dnode	*head;
	struct s_dnode	*tail;
	struct s_dnode	*cur;
};

struct s_iter	*ft_iter_init(void);
int				ft_iter_isempty(struct s_iter *iter);
void			ft_iter_add_head(struct s_iter *iter,
					void *content, size_t size);
void			ft_iter_add_tail(struct s_iter *iter,
					void *content, size_t size);
void			ft_iter_cnext(struct s_iter *iter);
void			ft_iter_cprev(struct s_iter *iter);

struct s_dnode	*ft_iter_pop_head(struct s_iter *iter);

void			*ft_iter_rm_cur(struct s_iter *iter);
void			*ft_iter_rm_head(struct s_iter *iter);
void			*ft_iter_rm_tail(struct s_iter *iter);
void			*ft_iter_rm_node(struct s_iter *iter, struct s_dnode *node);

#endif
