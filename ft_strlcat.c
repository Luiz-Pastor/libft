#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;
	size_t	j;

	dest_length = ft_strlen(dst);
	src_length = ft_strlen((const char *)src);
	i = dest_length;
	j = 0;
	if (dstsize <= dest_length)
		return (src_length + dstsize);
	while ((j < (dstsize - dest_length - 1)) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_length + dest_length);
}
