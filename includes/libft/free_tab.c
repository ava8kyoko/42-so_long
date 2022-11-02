/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:17:26 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/01 19:58:52 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_tab(char **tab)
{
	int		i;

	if (tab)
	{
		i = 0;
		while (tab[i])
			free(tab[i++]);
		free(tab);
	}
}

// void	free_it(char *str, char **tab)
// {
// 	int		i;
	
// 	if (str)
// 		free(str);
// 	if (tab)
// 	{
// 		i = 0;
// 		while (tab[i])
// 			free(tab[i++]);
// 		free(tab);
// 	}
// }
