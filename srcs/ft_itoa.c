#include <stdlib.h>
#include "libft.h"

int			length_of_num(long num)
{
	int	length;
	
	length = 1;
	while (num >= 10)
	{
		num /= 10;
		++length;
	}
	return (length);
}

static void	__putnbr(char *str, long num)
{
	if (num >= 10)
		__putnbr(str, num / 10);
	ft_strcat(str, ('0' + (num % 10)));
}

char		*ft_itoa(int n)
{
	char	*str;
	long	num;

	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		str = malloc(sizeof(char) * length_of_num(num) + 1);
		ft_strcat(str, '-');
	}
	else
		str = malloc(sizeof(char) * length_of_num(num));
	__putnbr(str, num);
	return (str);
}
