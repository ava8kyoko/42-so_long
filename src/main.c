/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 16:42:30 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**read_file(char *file)
{
	int		fd;
	
}

int		main(int argc, char **argv) // mpa file = .ber
{
	t_game	game;

	game = malloc();
	if (argc == 2)
	{
		if (valid_file(argv[1]) && valid_map(argv[1]))
			game->map = set_data(game->map);
	}
	perror("No map");
	return (0);
}
