#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	long long	index;

	index = ft_strlen(str) - 1;
	while (index >= 0)
	{
		if (str[index] == (unsigned char)c)
			return ((char *)&str[index]);
		index--;
	}
	return (NULL);
}
