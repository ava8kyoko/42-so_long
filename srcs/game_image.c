/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/23 21:12:31 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void put_image_on_map(t_data *data)
{
	data->map_y = -1;
	while (data->map[++data->map_y])
	{
		data->map_x = -1;
		while (data->map[data->map_y][++data->map_x])
		{
			if (data->map[data->map_y][data->map_x] == 'C')
				mlx_put_image_to_window(data->mlx, data->window, data->item,
				data->map_x * data->tile_size, data->map_y * data->tile_size);
			else if (data->map[data->map_y][data->map_x] == 'E')
				mlx_put_image_to_window(data->mlx, data->window, data->exit,
				data->map_x * data->tile_size, data->map_y * data->tile_size);
			else if (data->map[data->map_y][data->map_x] == 'P')
				mlx_put_image_to_window(data->mlx, data->window, data->player_top,
				data->map_x * data->tile_size, data->map_y * data->tile_size);
			else if (data->map[data->map_y][data->map_x] == '0')
				mlx_put_image_to_window(data->mlx, data->window, data->floor,
				data->map_x * data->tile_size, data->map_y * data->tile_size);
			else if (data->map[data->map_y][data->map_x] == '1')
				mlx_put_image_to_window(data->mlx, data->window, data->wall,
				data->map_x * data->tile_size, data->map_y * data->tile_size);	
		}
	}
}

void	init_xpm(t_data *data)
{
	data->item = mlx_xpm_file_to_image(data->mlx,
		"bin/img/item.xpm", &data->tile_size, &data->tile_size);
	data->exit = mlx_xpm_file_to_image(data->mlx,
		"bin/img/exit.xpm", &data->tile_size, &data->tile_size);
	data->player_top = mlx_xpm_file_to_image(data->mlx,
		"bin/img/player_top.xpm", &data->tile_size, &data->tile_size);
	data->player_left = mlx_xpm_file_to_image(data->mlx,
		"bin/img/player_left.xpm", &data->tile_size, &data->tile_size);
	data->player_right = mlx_xpm_file_to_image(data->mlx,
		"bin/img/player_right.xpm", &data->tile_size, &data->tile_size);
	data->player_down = mlx_xpm_file_to_image(data->mlx,
		"bin/img/player_down.xpm", &data->tile_size, &data->tile_size);
	data->floor = mlx_xpm_file_to_image(data->mlx,
		"bin/img/floor.xpm", &data->tile_size, &data->tile_size);
	data->wall = mlx_xpm_file_to_image(data->mlx,
		"bin/img/wall.xpm", &data->tile_size, &data->tile_size);
}
