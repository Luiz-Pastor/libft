/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:20:38 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:20:38 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf_private.h"
#include <stdio.h>

int	print_number(long number)
{
	int		count;
	char	printable;

	count = 0;
	if (number < 0)
	{
		count += write(1, "-", 1);
		number *= -1;
	}
	if (number == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}
	if (number < 10)
	{
		printable = number + '0';
		count += write(1, &printable, 1);
		return (count);
	}
	count += print_number(number / 10);
	printable = number % 10 + '0';
	count += write(1, &printable, 1);
	return (count);
}

int	ft_print_d(va_list arguments)
{
	int	number;

	number = va_arg(arguments, int);
	return (print_number(number));
}

int	ft_print_u(va_list arguments)
{
	long	number;

	number = va_arg(arguments, unsigned int);
	return (print_number(number));
}
