/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:29:38 by alan              #+#    #+#             */
/*   Updated: 2019/11/17 06:12:06 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

# include "ft_node.h"
# include <stddef.h>

struct	s_queue
{
	struct s_node	*first;
	struct s_node	*last;
};

struct s_queue	*ft_queue_init(void);
int				ft_queue_isempty(struct s_queue *queue);
void			*ft_queue_peek(struct s_queue *queue);
void			*ft_queue_pop(struct s_queue *queue);
void			ft_queue_append(struct s_queue *queue, void *content,
					size_t content_size);
void			ft_queue_insert(struct s_queue *queue, void *content,
					size_t content_size,
					int (*cmp)(void *queue_content, void *ins_content));

#endif
