#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memset(malloc(size), '\0', size));
}
