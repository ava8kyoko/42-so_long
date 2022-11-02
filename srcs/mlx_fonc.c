/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_fonc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:53:42 by acid.burn         #+#    #+#             */
/*   Updated: 2022/11/02 17:01:57 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	my_exit_game()
{
	
}

static void	my_init_xpm(t_data *data)
{
		data->player = mlx_xpm_file_to_image(data->mlx,
			"bin/collectables/Baren.xpm", &data->tile_size, &data->tile_size);
		data->start = mlx_xpm_file_to_image(data->mlx,
			"bin/collectables/Ice.xpm", &data->tile_size, &data->tile_size);
		data->collectable = mlx_xpm_file_to_image(data->mlx,
			"bin/collectables/Lava.xpm", &data->tile_size, &data->tile_size);
		data->exit = mlx_xpm_file_to_image(data->mlx,
			"bin/collectables/Terran.xpm", &data->tile_size, &data->tile_size);	
}

void	mlx_game(t_data *data)
{
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, data->mlx_x, data->mlx_y,
		"so_long");
	my_init_xpm(data);
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->player, 10, 10);
	mlx_hook(data->mlx_win, 2, 1L << 0, my_keybind, data);
	mlx_hook(data->mlx_win, 17, 1L << 0, my_exit_game, data);
	mlx_loop(data->mlx);
}