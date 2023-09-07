#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_casted;
	const char	*src_casted;

	dest_casted = (char *)dest;
	src_casted = (const char *)src;
	while (n > 0)
	{
		dest_casted[n - 1] = src_casted[n - 1];
		n--;
	}
	return ((void *)dest_casted);
}
