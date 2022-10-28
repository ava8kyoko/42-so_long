/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 23:39:35 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char	**read_file(char *filem t_game *game)
{
	int		fd;
	
	fd = open(file, 0_RDONLY);
	if (fd == -1)
		perror(); // free game
	
}

int		main(int argc, char **argv) // mpa file = .ber
{
	t_game	game;

	if (argc == 2)
	{
		if (valid_file(argv[1]))
			valid_map_and_set_data(argv[1], &game);
	}
	perror("No map");
	return (0);
}
