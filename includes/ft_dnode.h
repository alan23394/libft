/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 23:11:35 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 23:13:25 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DNODE_H
# define FT_DNODE_H

struct	s_dnode
{
	void			*content;
	struct s_dnode	*next;
	struct s_dnode	*prev;
};

struct s_dnode	*ft_dnode_init(void *content, struct s_dnode *next,
					struct s_dnode *prev);
void			ft_dnode_insert_before(struct s_dnode *src, void *insert);
void			ft_dnode_insert_after(struct s_dnode *src, void *insert);

#endif
