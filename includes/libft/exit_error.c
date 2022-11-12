/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:18:31 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/09 16:34:14 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	exit_error(char *message, char **tab)
{
	if (tab)
		printf("tab\n");
	// free_tab(tab);
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
