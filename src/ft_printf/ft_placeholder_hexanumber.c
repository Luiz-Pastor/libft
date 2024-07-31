/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder_hexanumber.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:20:36 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:20:36 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf_private.h"

int	ft_print_x(va_list argument)
{
	unsigned long long	number;
	char				text[33];
	size_t				index;
	int					count;

	index = 0;
	count = 0;
	number = va_arg(argument, unsigned int);
	to_hexa(number, text, HEXA_MIN);
	while (text[index])
	{
		count += write(1, &text[index], 1);
		index++;
	}
	return (count);
}

int	ft_print_xx(va_list argument)
{
	unsigned long long	number;
	char				text[33];
	size_t				index;
	int					count;

	index = 0;
	count = 0;
	number = va_arg(argument, unsigned int);
	to_hexa(number, text, HEXA_MAX);
	while (text[index])
	{
		count += write(1, &text[index], 1);
		index++;
	}
	return (count);
}
