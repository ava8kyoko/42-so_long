#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include "mlx/minilibx_opengl/mlx.h"
// # include "mlx/minilibx-linux/mlx.h"


// https://stackoverflow.com/questions/351733/how-would-one-write-object-oriented-code-in-c
typedef struct s_data
{
/*
** File
*/
	char 	**map;

/*
** mlx values
*/

	void	*mlx;
	int		mlx_x;
	int		mlx_y;
	void	*mlx_win;

/*
** Images
*/

	void	*player;
	void	*start;
	void	*collectable;
	void	*exit;
	int		tile_size;
	// size_t	empty; // 0
	// size_t	wall; // 1
	size_t	nb_collectable; // C
	size_t	nb_exit; // E
	size_t	nb_position; // P = départ
	// size_t	pos_x;
	// size_t	pos_y;
}				t_data;

int		main(int argc, char **argv);

int		keybind(int key, t_data *data);
void	mlx_game(t_data *data);
void	valid_file(t_data *data, char *file);
void	valid_map(t_data *data);

#endif
