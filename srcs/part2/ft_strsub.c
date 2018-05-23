#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(sizeof(char) * (len + 1));
	ft_strncpy(sub, s + start, len);
	return (sub);
}
