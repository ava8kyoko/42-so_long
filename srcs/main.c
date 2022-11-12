/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/09 15:44:12 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int		main(int argc, char **argv) // mpa file = .ber
{
	t_data	data;

	if (argc == 2 && argv)
	{
		valid_file(&data, argv[1]);
		valid_map(&data);
		mlx_game(&data);
		// close(data.file);
	}
	exit_error("no map", 0);
	return (0);
}
