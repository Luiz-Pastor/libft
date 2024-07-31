/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:06:48 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 11:28:55 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

long long	matrix_length(char **matrix)
{
	long long	size;

	size = 0;
	if (!matrix)
		return (-1);
	while (matrix[size])
		size++;
	return (size);
}
