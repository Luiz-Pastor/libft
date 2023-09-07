#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	index;
	char	*casted;

	casted = (char *)s;
	index = 0;
	while (index < n)
	{
		casted[index] = 0;
		index++;
	}
}
