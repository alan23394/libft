#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	return (ft_memset(malloc(size), 0, size));
}
