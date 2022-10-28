/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/28 14:39:05 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	()

static char	**read_file(char *file, size_t max_line)
{
	char	**new_file;
	int		fd;
	int		i;
	
	fd = open(file, 0_RDONLY);
	if (fd == -1)
		perror("open error"); // free file
	i = 0;
	while (max_line--)
		new_file[i++] = get_next_line(fd);
	if (!new_file)
		perror("get_next_line error"); // free file
	return (new_file);
}

static init_game(t_game *game)
{
	map = ft_calloc(18, sizeof(char)); // check if possible to know before
	// empty = 0;// 0
	// wall = 0; // 1
	collectable = 0; // C
	exit = 0; // E
	position = 0; // P = départ
	pos_x = 0;
	pos_y = 0;
}

int		main(int argc, char **argv) // mpa file = .ber
{
	t_game	game;

	if (argc == 2)
	{
		if (valid_file(argv[1]))
		{
			init_game(&game);
			game->map = read_file(argv[1], 18); // max height
			valid_map(game->map);	
		}
		// free map
	}
	perror("No map");
	return (0);
}
