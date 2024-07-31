/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:59:44 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 11:17:11 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	matrix_free(char **matrix)
{
	long long	i;

	i = -1;
	while (matrix && matrix[++i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
