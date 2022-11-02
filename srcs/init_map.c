/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:08:44 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/02 03:13:33 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char	**read_file(char *file, size_t max_line)
{
	char	**new_file;
	int		fd;
	int		i;
	
	fd = open(file, O_RDONLY);
	if (fd == -1)
		exit_error("open error", 0);
	new_file = ft_calloc(18, sizeof(char));
	if (!new_file)
		exit_error("ft_calloc file error", 0);
	i = 0;
	while (max_line--)
		new_file[i++] = get_next_line(fd);
	if (!new_file[0])
		exit_error("reading file error", 0);
	return (new_file);
}

static void validate_filename(char *file)
{	
	if (!strncmp_rev(file, ".ber", 4))
		exit_error("filename error", 0);
}

void	init_map(t_data *data, char *file)
{
	validate_filename(file);
	data->map = read_file(file, 18); // max height
	data->collectable = 0; // C
	data->exit = 0; // E
	data->position = 0; // P = départ
	// empty = 0;// 0
	// wall = 0; // 1
	// valid_map(data);
	// printf("%s\n", file);
	// data->mlx = mlx_init();
	// scanf(" ");
	// data->mlx_x = 0;
	// data->mlx_y = 0;
	// data->mlx_win = mlx_new_window(data->mlx, data->mlx_x, data->mlx_y, "so_long");
	// data->pos_x = 0;
	// data->pos_y = 0;
}
