/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:12:35 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 11:18:36 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

long long	matrix_search(char **matrix, char *str)
{
	long long	i;

	i = -1;
	while (matrix && matrix[++i])
	{
		if (!ft_strcmp(matrix[i], str))
			return (i);
	}
	return (-1);
}
