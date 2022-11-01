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
	char 	**map;
	void	*mlx;
	int		mlx_x;
	int		mlx_y;
	void	*mlx_win;
	// size_t	empty; // 0
	// size_t	wall; // 1
	size_t	collectable; // C
	size_t	exit; // E
	size_t	position; // P = départ
	// size_t	pos_x;
	// size_t	pos_y;
}				t_data;

void	init_data(t_data *data, char *file);
bool	valid_map(t_data *data);

#endif
