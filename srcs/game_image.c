/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/22 14:45:49 by mchampag         ###   ########.fr       */
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
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->collectable, data->map_x * 64, data->map_y * 64);
			else if (data->map[data->map_y][data->map_x] == 'E')
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->exit, data->map_x * 64, data->map_y * 64);
			else if (data->map[data->map_y][data->map_x] == 'P')
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->player, data->map_x * 64, data->map_y * 64);
			else if (data->map[data->map_y][data->map_x] == '0')
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->tile, data->map_x * 64, data->map_y * 64);
			else if (data->map[data->map_y][data->map_x] == '1')
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->wall, data->map_x * 64, data->map_y * 64);	
		}
	}
}

void	init_xpm(t_data *data)
{
	data->collectable = mlx_xpm_file_to_image(data->mlx,
		"bin/collectables/Lava.xpm", &data->tile_size, &data->tile_size);
	data->exit = mlx_xpm_file_to_image(data->mlx,
		"bin/collectables/Terran.xpm", &data->tile_size, &data->tile_size);
	data->player = mlx_xpm_file_to_image(data->mlx,
		"bin/collectables/Baren.xpm", &data->tile_size, &data->tile_size);
	data->tile = mlx_xpm_file_to_image(data->mlx,
		"bin/collectables/Ice.xpm", &data->tile_size, &data->tile_size);
	data->wall = mlx_xpm_file_to_image(data->mlx,
		"bin/collectables/Ice.xpm", &data->tile_size, &data->tile_size);
}
