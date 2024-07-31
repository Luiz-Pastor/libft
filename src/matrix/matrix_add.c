/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:23:08 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 13:38:00 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static char	**add_element(char **matrix, char *str, long long size)
{
	char		**new;
	long long	i;

	i = -1;
	new = ft_calloc(size, sizeof(char *));
	if (!new)
		return (NULL);
	while (matrix && matrix[++i])
		new[i] = matrix[i];
	new[i] = str;
	free(matrix);
	return (new);
}

char	**matrix_add(char **matrix, char *str)
{
	char		**new;
	long long	size;

	if (!str)
		return (NULL);
	size = matrix_length(matrix);
	if (size < 0)
		new = add_element(matrix, str, 2);
	else
		new = add_element(matrix, str, size + 2);
	return (new);
}
