#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include "mlx/minilibx_opengl/mlx.h"
// # include "mlx/minilibx-linux/mlx.h"

typedef struct s_game
{
	char 		**map;
	size_t	empty; // 0
	size_t	wall; // 1
	size_t	collectable; // C
	size_t	exit; // E
	size_t	position; // P = départ
	size_t	pos_x;
	size_t	pos_y;
}				t_game;

char	**read_file(char *file);
// t_game	set_data();

#endif
 