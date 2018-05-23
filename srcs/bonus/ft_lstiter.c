#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	/*
	if (lst -> next)
		ft_lstiter((*f)(lst) -> next, (*f));
	*/
	while ((void)(*f)(lst) && lst -> next)
		lst = lst -> next;
}
