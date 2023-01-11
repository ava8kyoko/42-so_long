/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:08:44 by mchampag          #+#    #+#             */
/*   Updated: 2023/01/11 12:27:32 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char	**read_file(char *file, size_t max_line)
{
	char	**new_file;
	int		fd;
	size_t	i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		exit_error("open file error", 0);
	new_file = ft_calloc(max_line, sizeof(char *));
	if (!new_file)
		exit_error("ft_calloc file error", 0);
	i = 0;
	while (i <= max_line - 1)
	{
		new_file[i] = get_next_line(fd);
		printf("%s", new_file[i]);
		if (!new_file[i++])
			break ;
	}
	printf("\n");
	if (!new_file[0] || new_file[max_line - 1])
		exit_error("empty file or too big", new_file);
	close(fd);
	return (new_file);
}

static void	valid_extension(char *file)
{	
	if (!strncmp_rev(file, ".ber", 4))
		exit_error("filename error", 0);
}

void	valid_file(t_data *data, char *file)
{
	valid_extension(file);
	data->map = read_file(file, 18);
	printf("sdgfsgsr ");
}
