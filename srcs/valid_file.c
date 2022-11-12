/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acid.burn <acid.burn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:08:44 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/09 17:24:21 by acid.burn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char	**read_file(char *file, size_t max_line)
{
	char		**new_file;
	int			fd;
	size_t		i;
	
	fd = open(file, O_RDONLY);
	if (fd == -1)
		exit_error("open file error", 0);
	new_file = ft_calloc(max_line, sizeof(char));
	if (!new_file)
		exit_error("ft_calloc file error", 0);
	i = 0;
	while (i <= max_line)
	{
		new_file[i] = get_next_line(fd);
		printf("\n");
		printf("new_file[0] : %s\n", new_file[0]);
		printf("%zu\n", i);
		printf("%s", new_file[i]);
		if (!new_file[i++])
			break;
	}
	printf("\n");
	printf("new_file[0] : %s\n", new_file[0]);
	printf("%zu\n", i);
	if (!new_file[0])
		exit_error("empty file", new_file);
	return (new_file);
}

static void valid_extension(char *file)
{	
	if (!strncmp_rev(file, ".ber", 4))
		exit_error("filename error", 0);
}

void	valid_file(t_data *data, char *file)
{
	valid_extension(file);
	data->map = read_file(file, 18); // max height
}
