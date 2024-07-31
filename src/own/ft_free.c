/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:37:56 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:42:49 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_free(int count, ...)
{
	int		index;
	va_list	args;
	void	**current;

	index = -1;
	va_start(args, count);
	while (++index < count)
	{
		current = va_arg(args, void **);
		if (current && *current)
		{
			free(*current);
			*current = NULL;
		}
	}
	va_end(args);
}
