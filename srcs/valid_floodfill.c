/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_floodfill.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:24:50 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 10:59:47 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	flood_fill(t_data *data, size_t x, size_t y)
{
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
	}
	if (data->floodfill_map[y][x] == 'E')
		data->floodfill_exit--;
	return ;
}

void	valid_floodfill(t_data *data)
{
	data->floodfill_map = remalloc_it(data->map, 0, 0);
	data->floodfill_exit = data->nb_exit;
	data->floodfill_item = data->nb_item;
	flood_fill(data, data->pos_x, data->pos_y);
	if (data->floodfill_item || data->floodfill_exit)
		exit_error("Flood fill failed\n", data->map);
	free_tab(data->floodfill_map);
	printf("floodfill ok\n");
}
