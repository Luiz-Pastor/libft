/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_private.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpastor- <lpastor-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:09:16 by lpastor-          #+#    #+#             */
/*   Updated: 2024/07/31 10:40:35 by lpastor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_PRIVATE_H
# define GNL_PRIVATE_H

# include "../libft.h"

char	*gnl_cpy(char *data);
int		gnl_find_ch(char *data, char ch);
void	*gnl_free(void **memory);
char	*add_line(char *data, char *add);

#endif