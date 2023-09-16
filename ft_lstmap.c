/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 00:35:56 by lpastor-          #+#    #+#             */
/*   Updated: 2023/09/12 09:23:00 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
