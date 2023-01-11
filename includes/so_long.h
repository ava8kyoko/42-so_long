/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:51:28 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 10:57:29 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include "mlx/minilibx_opengl/mlx.h"

/*
** File, mlx values, Map indexes, Flood fill data
** Images : P = player, C = item, E = exit
** Tile types number, Player position, so_long fonctions
*/
typedef struct s_data
{
	char	**map;
	size_t	height;
	size_t	width;

	int		tile_size;
	int		win_x;
	int		win_y;
	void	*mlx;
	void	*window;

	size_t	map_x;
	size_t	map_y;

	char	**floodfill_map;
	size_t	floodfill_exit;
	size_t	floodfill_item;

	void	*exit;
	void	*floor;
	void	*item;
	void	*player_down;
	void	*player_left;
	void	*player_right;
	void	*player_top;
	void	*wall;

	size_t	nb_item;
	size_t	nb_exit;
	size_t	nb_move;
	size_t	nb_player;

	size_t	pos_x;
	size_t	pos_y;
}			t_data;

int		exit_game(t_data *data);
void	init_xpm(t_data *data);
int		keybind(int key, t_data *data);
int		main(int argc, char **argv);
void	put_image_on_map(t_data *data);
void	valid_file(t_data *data, char *file);
void	valid_floodfill(t_data *data);
void	valid_map(t_data *data);

#endif
