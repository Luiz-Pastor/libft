#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	index;
	char	*s1;
	char	*s2;

	index = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (index < (n - 1) && (s1[index] == s2[index]))
		index++;
	return (s1[index] - s2[index]);
}
