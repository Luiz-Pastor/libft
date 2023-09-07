#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !*lst || !new)
		return ;
	current = *lst;
	if (!current)
		return ;
	while (current->next)
		current = current->next;
	current->next = new;
}
