/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_private.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:20:25 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:20:25 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PRIVATE_H
# define FT_PRINTF_PRIVATE_H

# include "../libft.h"

# define PLACEHOLDERS	"csdpiuxX%"
# define HEXA_MIN		"0123456789abcdef"
# define HEXA_MAX		"0123456789ABCDEF"

size_t		placeholder_count(const char *text);
char		get_nplaceholder(const char *text, long long position);
int			is_placeholder(char ph);

void		to_hexa(unsigned long long number, char *buffer, char *dict);

int			ft_print_c(va_list arguments);
int			ft_print_s(va_list arguments);
int			ft_print_d(va_list arguments);
int			ft_print_p(va_list arguments);
int			ft_print_x(va_list argument);
int			ft_print_xx(va_list argument);
int			ft_print_u(va_list arguments);

#endif