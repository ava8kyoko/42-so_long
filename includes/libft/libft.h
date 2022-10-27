/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:39:34 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 15:20:28 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** get_next_line
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif
# define FD_MAX 1024

/*
** LIBRARIES
*/

# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h> 

/*
** LIBFT FONCTIONS
*/

char	*get_next_line(int fd);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *str1, char const *str2, int free_1);
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *inside, const char *tofind,
			size_t len_tosearch);
// void	print_table(char *message, int **int_tab, size_t size, char **str_tab);
// void	print_array(char *message, int *ar_int, size_t size, char *string);

#endif
