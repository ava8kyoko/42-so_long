/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:01:23 by acid.burn         #+#    #+#             */
/*   Updated: 2022/11/22 15:57:36 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	moves(t_data *data, void *player, size_t x, size_t y) // AJOUTER NOMBRE DE MOVES RÉALISÉS
{
	if (data->map[data->pos_y + y][data->pos_x + x] != '1')
	{
		if (data->map[data->pos_y + y][data->pos_x + x] == 'E'
			&& data->nb_collectable)
			printf("Reste des collectables.\n");
		else
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win,
			data->tile, data->pos_x * 64, data->pos_y * 64);
			data->pos_x += x;
			data->pos_y += y;
			if (data->map[data->pos_y + y][data->pos_x + x] == 'C')
				--data->nb_collectable;
			mlx_put_image_to_window(data->mlx, data->mlx_win,
			player, data->pos_x * 64, data->pos_y * 64);
		}
	}
}

int	keybind(int key, t_data *data)
{
	if (key == 13)
		moves(data, data->player, 0, -1); // forward
	else if (key == 1 || key == 115)
		moves(data, data->player, 0, 1); // backward
	else if (key == 0 || key == 97)
		moves(data, data->player, -1, 0); // left
	else if (key == 2 || key == 100)
		moves(data, data->player, 1, 0); // right
	// else if (key == 53 || key == 65307)
		// exit_game(data);
	return (0);
}
