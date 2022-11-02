/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:48:48 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/02 16:55:15 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	valid_map(t_data *data)
{	
	if (data->map[17] || ft_strlen(data->map[0]) > 31) // find another way
		exit_error("map must be equal or less than 30x16", data->map);
	data->nb_position = 0;
	data->nb_collectable = 0;
	data->nb_exit = 0;
	
	data->mlx_x = 1000;
	data->mlx_y = 900;
}