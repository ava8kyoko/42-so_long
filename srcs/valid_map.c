/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:48:48 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/23 20:39:48 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	valid_walls(t_data *data)
{
	size_t	i;

	i = -1;
	while (++i < data->width)
	{
		if (data->map[0][i] != '1' || data->map[data->height - 1][i] != '1')
			exit_error("walls map must contain only 1 character", data->map);
	}
	i = 0;
	while (++i < data->height - 1)
	{
		if (data->map[i][0] != '1' || data->map[i][data->width - 1] != '1')
			exit_error("walls map must contain only 1 character", data->map);
	}
}

static void	valid_characters(t_data *data)
{
	data->map_y = -1;
	while (++data->map_y < data->height)
	{
		data->map_x = -1;
		while (++data->map_x < data->width)
		{
			if (data->map[data->map_y][data->map_x] == '0'
				|| data->map[data->map_y][data->map_x] == '1')
				;
			else if (data->map[data->map_y][data->map_x] == 'P')
			{
				data->nb_player++;
				data->pos_x = data->map_x;
				data->pos_y = data->map_y;
			}
			else if (data->map[data->map_y][data->map_x] == 'C')
				data->nb_item++;
			else if (data->map[data->map_y][data->map_x] == 'E')
				data->nb_exit++;
			else
				exit_error("map contains bad character", data->map);
		}
	}
	if (data->nb_player != 1 || !data->nb_item || data->nb_exit != 1)
		exit_error("Must contains 1 P, 1 E and at least 1 C", data->map);
}

static void	valid_dimensions(t_data *data)
{
	size_t	len;

	data->width = ft_strlen(data->map[0]);
	if (data->map[0][data->width - 1] == '\n')
		data->width--;
	if (data->width > 31)
		exit_error("map width must be equal or less than 30 tiles", data->map);
	data->height = -1;
	while (data->map[++data->height])
	{
		len = ft_strlen(data->map[data->height]);
		if (data->map[data->height][len - 1] == '\n')
			len--;
		if (len != data->width)
			exit_error("lenght lines aren't equivalent to width", data->map);
		if (data->height > 16)
			exit_error("map height must be equal or less than 16 tiles",
				data->map);
	}
}

void	valid_map(t_data *data)
{	
	valid_dimensions(data);
	data->nb_player = 0;
	data->nb_item = 0;
	data->nb_exit = 0;
	valid_characters(data);
	valid_walls(data);
	data->nb_move = 0;
	data->tile_size = 64;
	data->width *= data->tile_size;
	data->height *= data->tile_size;
	printf("data->width : %zu\n", data->width);
	printf("data->height : %zu\n", data->height);
}
