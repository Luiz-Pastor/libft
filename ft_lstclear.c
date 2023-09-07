#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*aux;

	if (!lst || !(*lst) || !del)
		return ;
	current = *lst;
	while (current)
	{
		aux = current;
		current = current->next;
		del(aux->content);
		free(aux);
	}
	*lst = NULL;
}
