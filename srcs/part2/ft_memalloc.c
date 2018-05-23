#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == 0)
		return (0);
	return (ft_memset(ptr, 0, size));
}
