/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:24:50 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/24 22:40:16 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void flood_fill(t_data *data, size_t x, size_t y)
{
	if (data->floodfill_map[y][x] == '1' || data->floodfill_map[y][x] == 'E'
		|| data->floodfill_map[y][x] == 'F')
			return ;
	if (data->floodfill_map[y][x] == '0' || data->floodfill_map[y][x] == 'C'
		|| data->floodfill_map[y][x] == 'P')
	{
		if (data->floodfill_map[y][x] == 'C')
			data->floodfill_item--;
		data->floodfill_map[y][x] = 'F';
		flood_fill(data, x, y - 1);
		flood_fill(data, x, y + 1);
		flood_fill(data, x - 1, y);
		flood_fill(data, x + 1, y);
		return ;
	}
}

void	valid_floodfill(t_data *data)
{
	data->floodfill_map = remalloc_it(data->map, 0, 0);
	data->floodfill_exit = 0;
	data->floodfill_item = data->nb_item;
	flood_fill(data, data->pos_x, data->pos_y);
	free_tab(data->floodfill_map);
	if (data->floodfill_item)
		exit_error("Flood fill failed\n", data->map);	
	printf("floodfill ok\n");
}
