#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*memory;
	size_t	index;

	index = 0;
	if (nitems <= 0 || size <= 0)
		memory = (char *)malloc(1);
	else
		memory = (char *)malloc(nitems * size);
	if (!memory)
		return (NULL);
	while (index < (nitems * size))
	{
		memory[index] = 0;
		index++;
	}
	return ((void *)memory);
}
