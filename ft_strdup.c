#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	index;
	char	*memory;

	index = 0;
	memory = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!memory)
		return (NULL);
	while (s[index])
	{
		memory[index] = s[index];
		index++;
	}
	memory[index] = '\0';
	return (memory);
}
