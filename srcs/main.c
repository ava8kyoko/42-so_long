/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/24 10:36:29 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	game(t_data *data)
{
	data->mlx = mlx_init();
	data->window = mlx_new_window(data->mlx, data->width, data->height,
			"so_long");
	init_xpm(data);
	put_image_on_map(data);
	mlx_hook(data->window, 2, 1L << 0, &keybind, data);
	mlx_hook(data->window, 17, 1L << 0, &exit_game, data);
	mlx_loop(data->mlx);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 2 && argv)
	{
		valid_file(&data, argv[1]);
		valid_map(&data);
		valid_floodfill(&data);
		game(&data);
	}
	exit_error("no map", 0);
	return (0);
}
