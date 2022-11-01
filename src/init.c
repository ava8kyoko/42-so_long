/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:08:44 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/01 13:21:15 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char	**read_file(char *file, size_t max_line)
{
	char	**new_file;
	int		fd;
	int		i;
	
	fd = open(file, 0_RDONLY);
	if (fd == -1)
		exit_error("open error", file, 0);
	i = 0;
	while (max_line--)
		new_file[i++] = get_next_line(fd);
	if (!new_file)
		exit_error("reading file error", file, new_file);
	return (new_file);
}

static void validate_filename(char *file)
{
	size_t	len;
	
	if (!file || !strncmp_rev(file, ".ber", 4))
		error("filename error", file, 0);
	return (0);
}

void	init_data(t_data *data, char *file)
{
	validate_filename(file);
	data->map = ft_calloc(18, sizeof(char)); // check if possible to know before
	data->map = read_file(file, 18); // max height
	data->collectable = 0; // C
	data->exit = 0; // E
	data->position = 0; // P = départ
	// empty = 0;// 0
	// wall = 0; // 1
	valid_map(data);
	data->mlx = mlx_ini();
	data->mlx_x = 0;
	data->mlx_y = 0;
	data->mlx_win = mlx_new_window(data->mlx, data->mlx_x, data->mlx_y, "so_long");
	// data->pos_x = 0;
	// data->pos_y = 0;
}
