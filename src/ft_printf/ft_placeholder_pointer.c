/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder_pointer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:20:41 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:20:41 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf_private.h"

int	ft_print_p(va_list arguments)
{
	void	*elem;
	char	text[100];
	int		count;
	size_t	index;

	index = 0;
	elem = va_arg(arguments, void *);
	if (!elem)
		return (write(1, "(nil)", 5));
	to_hexa((unsigned long long) elem, text, HEXA_MIN);
	count = write(1, "0x", 2);
	while (text[index])
	{
		count += write(1, &text[index], 1);
		index++;
	}
	return (count);
}
