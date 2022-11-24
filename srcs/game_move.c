/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:01:23 by acid.burn         #+#    #+#             */
/*   Updated: 2022/11/23 21:04:31 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	move(t_data *data, void *player, size_t x, size_t y)
{
	if (data->map[data->pos_y + y][data->pos_x + x] != '1')
	{
		if (data->map[data->pos_y + y][data->pos_x + x] == 'E')
		{
			if (data->nb_item)
				printf("%zu shoal(s) of fish to eat!\n", data->nb_item);
			else
				exit_game(data);	
		}
		else
			mlx_put_image_to_window(data->mlx, data->window, data->floor,
				data->pos_x * data->tile_size, data->pos_y * data->tile_size);
			if (data->map[data->pos_y + y][data->pos_x + x] == 'C')
				--data->nb_item;
			data->pos_x += x;
			data->pos_y += y;
			mlx_put_image_to_window(data->mlx, data->window, player,
				data->pos_x * data->tile_size, data->pos_y * data->tile_size);
			printf("Moves : %zu\n", ++data->nb_move);
	}
}

int	keybind(int key, t_data *data)
{
	if (key == 13)
		move(data, data->player_top, 0, -1); // forward
	else if (key == 1)
		move(data, data->player_down, 0, 1); // backward
	else if (key == 0)
		move(data, data->player_left, -1, 0); // left
	else if (key == 2)
		move(data, data->player_right, 1, 0); // right
	else if (key == 53)
		exit_game(data);
	return (0);
}
