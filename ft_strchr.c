#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned long long	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (unsigned char)c)
			return ((char *)&str[index]);
		index++;
	}
	return (NULL);
}
