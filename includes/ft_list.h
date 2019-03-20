/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 02:32:21 by alan              #+#    #+#             */
/*   Updated: 2019/03/20 13:58:20 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstinit(void const *content, size_t content_size);
t_list				*ft_lstnew(void const *content, size_t content_size);

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstmemdel(void *content, size_t content_size);

void				ft_lstadd(t_list **alst, t_list *item);
void				ft_lstadd_tail(t_list **alst, t_list *item);

size_t				ft_lstlen(t_list *head);

void				ft_lstiter(t_list *lst, void (*f)(t_list *item));
void				ft_lstputstr(t_list *item);
void				ft_lstputstr_len(t_list *item);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *item));

char				*ft_lstcomb_str(t_list *list, int size_of_list);

#endif
