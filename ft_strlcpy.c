#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	src_length;

	index = 0;
	src_length = ft_strlen(src);
	if (!src)
		return (0);
	if ((long long) size < 0)
		size = 1 + src_length;
	if (src_length > 0 && size > 1)
	{
		while (index < (size - 1))
		{
			if (index < src_length)
				dst[index] = src[index];
			else if (index == src_length)
				dst[index] = '\0';
			index++;
		}
	}
	if (size > 0)
		dst[index] = '\0';
	return (src_length);
}
