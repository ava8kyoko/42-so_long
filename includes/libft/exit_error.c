/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:18:31 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 13:14:15 by mchampag         ###   ########.fr       */
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
