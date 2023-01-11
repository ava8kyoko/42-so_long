/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remalloc_it.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:49:58 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 10:50:33 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**remalloc_it(char **old, int size, char free)
{
	char	**new;
	size_t	i;

	if (old == 0)
		return (0);
	new = ft_calloc(sizeof(char *), (size_array(old) + size));
	if (!new)
		return (0);
	i = -1;
	while (old[++i])
		new[i] = ft_strdup(old[i]);
	if (free == 'f')
		free_array(old);
	return (new);
}
