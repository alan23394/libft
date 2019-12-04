/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:11:35 by alan              #+#    #+#             */
/*   Updated: 2019/12/03 16:13:36 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DNODE_H
# define FT_DNODE_H

# include <stddef.h>

struct			s_dnode
{
	void			*content;
	size_t			content_size;
	struct s_dnode	*next;
	struct s_dnode	*prev;
};

struct s_dnode	*ft_dnode_init(void *content, size_t content_size,
					struct s_dnode *next, struct s_dnode *prev);
void			ft_dnode_insert_before(struct s_dnode *src,
					void *insert, size_t size);
void			ft_dnode_insert_after(struct s_dnode *src,
					void *insert, size_t size);

#endif
