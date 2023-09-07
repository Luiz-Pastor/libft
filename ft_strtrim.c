#include "libft.h"

static int	app_character(const char ch, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == ch)
			return (1);
		index++;
	}
	return (0);
}

static char	*avoid_ch(char *memory, const char *s1, const char *set)
{
	size_t	index_memory;
	size_t	index_s1;

	index_memory = 0;
	index_s1 = 0;
	while (s1[index_s1])
	{
		if (!app_character(s1[index_s1], set))
		{
			memory[index_memory] = s1[index_s1];
			index_memory++;
		}
		index_s1++;
	}
	memory[index_memory] = '\0';
	return (memory);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	count;
	char	*memory;

	index = 0;
	count = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[index])
	{
		if (app_character(s1[index], set))
			count++;
		index++;
	}
	memory = (char *) malloc((ft_strlen(s1) - count + 1) * sizeof(char));
	if (!memory)
		return (NULL);
	return (avoid_ch(memory, s1, set));
}
