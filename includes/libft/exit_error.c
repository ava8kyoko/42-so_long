/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:18:31 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/23 21:29:05 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	exit_error(char *message, char **tab)
{
	if (tab)
		free_tab(tab);
	ft_putstr_fd(2, "Error", 'n');
	ft_putstr_fd(2, message, 'n');
	exit(EXIT_FAILURE);
}

// void	exit_error(char *message, char *str, char **tab)
// {
// 	if (str || tab)
// 		free_it(str, tab);
// 	ft_putstr_fd(2, "open error", 'n');
// 	exit(EXIT_FAILURE);
// }
