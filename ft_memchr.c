#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	index;
	char	*str_casted;

	index = 0;
	str_casted = (char *)str;
	while (index < n)
	{
		if (str_casted[index] == (unsigned char)c)
			return ((void *)&str_casted[index]);
		index++;
	}
	return (NULL);
}
