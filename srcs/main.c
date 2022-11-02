/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/02 02:43:36 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int		main(int argc, char **argv) // mpa file = .ber
{
	t_data	data;
	void	*dragon;
	int		tile_size;

	if (argc == 2)
	{
		// init_map(&data, argv[1]);
		printf("%s\n", argv[1]);
		data.mlx = mlx_init();
		data.mlx_x = 1000;
		data.mlx_y = 1000;
		data.mlx_win = mlx_new_window(data.mlx, data.mlx_x, data.mlx_y,
			"so_long");
		dragon = mlx_xpm_file_to_image(data.mlx, "daenerys.xpm", &tile_size,
			&tile_size);
		mlx_put_image_to_window(data.mlx, data.mlx_win, dragon, 0, 0);
		mlx_loop(data.mlx);
		// init_();
		// close(data.file);
	}
	exit_error("no map", 0);
	return (0);
}
