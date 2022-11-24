/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:53:42 by acid.burn         #+#    #+#             */
/*   Updated: 2022/11/23 21:24:25 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	destroy_mlx(t_data *data)
{
	mlx_destroy_image(data->mlx, data->item);
	mlx_destroy_image(data->mlx, data->exit);
	mlx_destroy_image(data->mlx, data->player_top);
	mlx_destroy_image(data->mlx, data->player_left);
	mlx_destroy_image(data->mlx, data->player_right);
	mlx_destroy_image(data->mlx, data->player_down);
	mlx_destroy_image(data->mlx, data->floor);
	mlx_destroy_image(data->mlx, data->wall);
	mlx_destroy_window(data->mlx, data->window);
}

int	exit_game(t_data *data)
{
	if (data->nb_item)
		printf("Exit game :  GAME OVER  /!\\\n");
	else
		printf("Exit game :  win  ><>\n");
	destroy_mlx(data);
	free_tab(data->map);
	exit (0);
}
