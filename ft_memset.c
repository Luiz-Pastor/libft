#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	index;
	char	*casted;

	index = 0;
	if (!str)
		return (NULL);
	casted = (char *)str;
	while (index < n)
	{
		casted[index] = (unsigned char)c;
		index++;
	}
	return ((void *)casted);
}
