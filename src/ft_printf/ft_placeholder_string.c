/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:20:43 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:20:43 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf_private.h"

int	ft_print_c(va_list arguments)
{
	char	ch;

	ch = va_arg(arguments, int);
	return (write(1, &ch, 1));
}

int	ft_print_s(va_list arguments)
{
	char	*str;
	size_t	index;
	int		count;

	count = 0;
	index = 0;
	str = va_arg(arguments, char *);
	if (!str)
		return (write(1, "(null)", 6));
	while (str[index])
	{
		count += write(1, &str[index], 1);
		index++;
	}
	return (count);
}
