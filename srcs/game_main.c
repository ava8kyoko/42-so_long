/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:53:42 by acid.burn         #+#    #+#             */
/*   Updated: 2022/11/22 15:56:05 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static int	exit_game(t_data *data)
{
	free(data->map); // ajout destroy images
	exit (0);
}

void	game(t_data *data)
{
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, data->mlx_x, data->mlx_y,
		"so_long");
	init_xpm(data);
	put_image_on_map(data);
	mlx_hook(data->mlx_win, 2, 1L << 0, &keybind, data);
	mlx_hook(data->mlx_win, 17, 1L << 0, &exit_game, data);
	mlx_loop(data->mlx);
}
