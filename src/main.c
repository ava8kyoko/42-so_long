/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:56:22 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/01 13:21:58 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int		main(int argc, char **argv) // mpa file = .ber
{
	t_data	data;

	if (argc == 2)
	{
		init_data(&data, argv[1]);
		
		// close(data.file);
	}
	exit_error("no map", 0, 0);
	return (0);
}
