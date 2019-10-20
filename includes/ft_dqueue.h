/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dqueue.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:13:34 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:15:27 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DQUEUE_H
# define FT_DQUEUE_H

struct	s_dqueue
{
	struct s_dnode	*first;
	struct s_dnode	*last;
};

struct s_dqueue	*ft_dqueue_init(void);
int				ft_dqueue_isempty(struct s_dqueue *dqueue);
void			*ft_dqueue_peek(struct s_dqueue *dqueue);
void			*ft_dqueue_pop(struct s_dqueue *dqueue);
void			ft_dqueue_append(struct s_dqueue *dqueue, void *content);
void			ft_dqueue_prepend(struct s_dqueue *dqueue, void *content);
void			ft_dqueue_insert(struct s_dqueue *dqueue, void *content,
					int (*cmp)(void *dqueue_content, void *ins_content));

#endif
