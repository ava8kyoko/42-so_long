/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/02 16:56:03 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int		main(int argc, char **argv) // mpa file = .ber
{
	t_data	data;

	if (argc == 2 && argv)
	{
		validate_file(&data, argv[1]);
		validate_map(&data);
		mlx_game(&data);
		// close(data.file);
	}
	exit_error("no map", 0);
	return (0);
}
