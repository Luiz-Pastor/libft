#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*memory;
	unsigned int	index;

	index = 0;
	if (!s || !f)
		return (NULL);
	memory = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s[index])
	{
		memory[index] = f(index, s[index]);
		index++;
	}
	memory[index] = '\0';
	return (memory);
}
