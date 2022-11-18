/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:48:48 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/17 21:58:44 by mchampag         ###   ########.fr       */
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
	size_t	line;
	size_t	i;

	line = -1;
	while (++line < data->height)
	{
		i = -1;
		while (++i < data->width)
		{
			if (data->map[line][i] == '0' || data->map[line][i] == '1')
				;
			else if (data->map[line][i] == 'P')
				data->nb_position++;
			else if (data->map[line][i] == 'C')
				data->nb_collectable++;
			else if (data->map[line][i] == 'E')
				data->nb_exit++;
			else
				exit_error("map contains bad character", data->map);
		}
	}
	if (data->nb_position != 1 || !data->nb_collectable
		|| data->nb_exit != 1)
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
	data->nb_position = 0;
	data->nb_collectable = 0;
	data->nb_exit = 0;
	valid_characters(data);
	valid_walls(data);
	data->mlx_x = 1000;
	data->mlx_y = 900;
	printf("data->width : %zu\n", data->width);
	printf("data->height : %zu\n", data->height);
}
