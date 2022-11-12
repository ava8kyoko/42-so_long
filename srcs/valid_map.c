/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:48:48 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/09 16:55:35 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	valid_map(t_data *data)
{	
	printf("data->map[0] : %s", data->map[0]);
	printf("largeur map : %zu\n", ft_strlen(data->map[0]));
	// printf("hauteur map : %s\n", data->map[17]);
	if (ft_strlen(data->map[0]) > 31) // data->map[17] || 
	{
		printf("sajhfj\n");
		exit_error("map must be equal or less than 30x16", data->map);	
	}
	scanf(" ");
	data->nb_position = 0;
	data->nb_collectable = 0;
	data->nb_exit = 0;
	
	data->mlx_x = 1000;
	data->mlx_y = 900;
}
