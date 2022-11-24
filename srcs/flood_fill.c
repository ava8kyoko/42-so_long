/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:24:50 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/23 23:19:35 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../includes/so_long.h"

// static void	*ft_free(void *ptr)
// {
// 	if (ptr)
// 		free(ptr);
// 	return (0);
// }

// static void	**ft_free_array(char **array)
// {
// 	int	i;

// 	if (!array)
// 		return (0);
// 	i = -1;
// 	while (array[++i])
// 	{
// 		if (array[i])
// 			array[i] = ft_free(array[i]);
// 	}
// 	array = ft_free(array);
// 	return (0);
// }

// static char	*ft_strdup(const char *src)
// {
// 	char	*tmp;

// 	if (!src)
// 		return (0);
// 	tmp = malloc(sizeof(char) * (ft_strlen(src) + 1));
// 	if (tmp == 0)
// 		return (0);
// 	ft_strlcpy(tmp, src, sizeof(char) * (ft_strlen(src) + 1));
// 	*(tmp + ft_strlen(src)) = '\0';
// 	return (tmp);
// }


// static char	**ft_remalloc(char **old, int size, char free)
// {
// 	char	**new;
// 	int		i;

// 	if (old == 0)
// 		return (0);
// 	new = ft_calloc(sizeof(char *), (ft_array_size(old) + size));
// 	if (!new)
// 		return (0);
// 	i = -1;
// 	while (old[++i])
// 		new[i] = ft_strdup(old[i]);
// 	if (free == 'f')
// 		ft_free_array(old);
// 	return (new);
// }


// void flood_fill()
// {
	
// }


// // static void	flood_fill(t_game *game, int x, int y)
// // {
// // 	if (game->map[y][x] == '1' || game->map[y][x] == 'F')
// // 		return ;
// // 	if (game->map[y][x] == '0' || game->map[y][x] == 'C' ||
// // 		game->map[y][x] == 'E' || game->map[y][x] == 'P')
// // 	{
// // 		if (game->map[y][x] == 'C')
// // 			game->c_acess++;
// // 		if (game->map[y][x] == 'E')
// // 			game->e_acess++;
// // 		game->map[y][x] = 'F';
// // 		flood_fill(game, x, y - 1);
// // 		flood_fill(game, x, y + 1);
// // 		flood_fill(game, x - 1, y);
// // 		flood_fill(game, x + 1, y);
// // 		return ;
// // 	}
// // }

// // int	map_valid(t_game *game, char *argv)
// // {
// // 	int	check_collect;
// // 	int	check_exit;

// // 	player_position(game);
// // 	flood_fill(game, game->player_x, game->player_y);
// // 	check_collect = game->map_c_count - game->c_acess;
// // 	check_exit = game->map_e_count - game->e_acess;
// // 	if (check_collect == 0 && check_exit == 0)
// // 	{
// // 		free_map(game->map);
// // 		game->map = init_map(game, argv);
// // 		return (0);
// // 	}
// // 	log_msg(7);
// // 	return (1);
// // }