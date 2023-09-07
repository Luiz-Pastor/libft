#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy_head;
	t_list	*cpy_aux;
	int		error;

	error = 0;
	if (!lst || !f || !del)
		return (NULL);
	cpy_head = ft_lstnew(f(lst->content));
	cpy_aux = cpy_head;
	while (lst->next && !error)
	{
		lst = lst->next;
		cpy_aux->next = ft_lstnew(f(lst->content));
		if (!cpy_aux->next)
		{
			error = 1;
			ft_lstclear(&cpy_head, del);
		}
		cpy_aux = cpy_aux->next;
	}
	if (!error)
		return (cpy_head);
	return (NULL);
}
