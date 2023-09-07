#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index_big;
	size_t	index_lit;
	size_t	index_temp;

	index_big = 0;
	if (!little || !little[0])
		return ((char *)big);
	while (index_big < len && big[index_big])
	{
		if (big[index_big] == little[0])
		{
			index_lit = 0;
			index_temp = index_big;
			while (big[index_big] == little[index_lit] && index_big < len)
			{
				index_big++;
				index_lit++;
			}
			if (little[index_lit] == '\0')
				return ((char *)&big[index_big - index_lit]);
			index_big = index_temp;
		}
		index_big++;
	}
	return (NULL);
}
