#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*memory;

	memory = (t_list *) malloc(sizeof(t_list));
	if (!memory)
		return (NULL);
	memory->content = content;
	memory->next = NULL;
	return (memory);
}
