/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:08:44 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/28 13:44:32 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libft.h"

// bool	check_dimensions(char *map)
// {
// 	return (0);
// }

bool	valid_map(char *file)
{
	bool valid;
	
	if (file)
	{
		if ()
			
	}
	perror("Not a valid map");
	return (0);
}

bool	valid_file(char *file)
{
	size_t	len;
	
	if (file)
		if (ft_strlen(file)
			&& strncmp_rev(file + ft_strlen(file) + 4, ".ber", 4))
			return (1);
	perror("Not a valid file name");
	return (0);
}
