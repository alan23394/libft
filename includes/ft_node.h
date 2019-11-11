/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:28:59 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 15:35:19 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NODE_H
# define FT_NODE_H

# include <stddef.h>

struct	s_node
{
	void			*content;
	size_t			content_size;
	struct s_node	*next;
};

struct s_node	*ft_node_init(void *content, size_t content_size,
					struct s_node *next);

#endif
