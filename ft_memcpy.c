#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		index;
	const char	*src_casted;
	char		*dest_casted;

	index = 0;
	src_casted = (const char *)src;
	dest_casted = (char *)dest;
	while (index < n)
	{
		dest_casted[index] = src_casted[index];
		index++;
	}
	return ((void *)dest_casted);
}
