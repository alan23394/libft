#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst) -> next)
		ft_lstdel(alst + 1, (*del));
	ft_lstdelone(*alst, (*del));
}
