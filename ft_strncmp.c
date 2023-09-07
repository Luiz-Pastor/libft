#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n - 1 && str1[index] == str2[index])
		index++;
	return (str1[index] - str2[index]);
}
