#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	index;
	char	*src_casted;
	char	*dest_casted;

	index = 0;
	src_casted = (char *)src;
	dest_casted = (char *)dest;
	while (index < n && src_casted[index] != c)
	{
		dest_casted[index] = src_casted[index];
		index++;
	}
	if (src_casted[index] == c && index < n)
		dest_casted[index] = c;
	return ((void *)dest_casted);
}
