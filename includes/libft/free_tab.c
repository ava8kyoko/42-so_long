/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:17:26 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 13:09:07 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**free_tab(char **tab)
{
	size_t	i;

	if (tab)
	{
		i = -1;
		while (tab[++i])
			tab[i] = free_array(tab[i]);
		free(tab);
	}
	return (0);
}
