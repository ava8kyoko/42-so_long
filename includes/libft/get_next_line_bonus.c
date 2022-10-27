/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:16:06 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 11:43:26 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*free_it(char *buffer, char *r_buffer, char *rtn)
{
	if (buffer)
		free (buffer);
	if (r_buffer)
		free (r_buffer);
	return (rtn);
}

static char	*sub_buffer(char *buffer, char *newline)
{
	newline = ft_strdup(newline);
	buffer = free_it(buffer, NULL, NULL);
	if (newline)
	{
		buffer = ft_substr(newline, 1, ft_strlen(newline));
		free(newline);
	}
	return (buffer);
}

static char	*make_line(char *buffer, char *line, char *newline)
{
	if (!newline)
		line = ft_strdup(buffer);
	else
		line = ft_substr(buffer, 0, (ft_strlen(buffer) + 1)
				- ft_strlen(newline));
	return (line);
}

static char	*read_file(int fd, char *buffer, char *newline)
{
	char	*r_buffer;
	int		bytes;

	if (buffer && ft_strchr(buffer, '\n'))
		return (buffer);
	r_buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!r_buffer)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && !newline)
	{
		bytes = read(fd, r_buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (free_it(r_buffer, NULL, NULL));
		if (bytes == 0 && !ft_strlen(buffer))
			return (free_it(buffer, r_buffer, NULL));
		if (bytes == 0)
			return (free_it(NULL, r_buffer, buffer));
		r_buffer[bytes] = 0;
		buffer = ft_strjoin_gnl(buffer, r_buffer);
		newline = ft_strchr(buffer, '\n');
	}
	return (free_it(NULL, r_buffer, buffer));
}

char	*get_next_line(int fd)
{
	static char	*buffer[FD_MAX];
	char		*line;
	char		*newline;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FD_MAX)
		return (NULL);
	line = NULL;
	newline = NULL;
	buffer[fd] = read_file(fd, buffer[fd], newline);
	if (!buffer[fd])
		return (NULL);
	newline = ft_strchr(buffer[fd], '\n');
	line = make_line(buffer[fd], line, newline);
	buffer[fd] = sub_buffer(buffer[fd], newline);
	return (line);
}
