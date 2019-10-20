/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:28:59 by alan              #+#    #+#             */
/*   Updated: 2019/10/19 18:10:15 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NODE_H
# define FT_NODE_H

struct	s_node
{
	void			*content;
	struct s_node	*next;
};

struct s_node	*ft_node_init(void *content, struct s_node *next);

#endif
