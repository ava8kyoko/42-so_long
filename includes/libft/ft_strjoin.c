/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:32:45 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 11:53:21 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin_gnl(char const *str1, char const *str2)
{
	char	*dst;
	char	*str;
	char	*temp;

	if (!str1 && !str2)
		return (NULL);
	if (!str1 && str2)
		return (ft_strdup(str2));
	if (str1 && !str2)
		return (ft_strdup(str1));
	dst = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!dst)
		return (NULL);
	str = dst;
	temp = (char *)str1;
	while (*temp)
		*dst++ = *temp++;
	if (str1)
		free((char *)str1);
	while (*str2)
		*dst++ = *str2++;
	*dst = 0;
	return (str);
}

// char	*ft_strjoin(char const *str1, char const *str2)
// {
// 	char	*memory_space;
// 	size_t	len_str1;
// 	size_t	len_str2;

// 	if (!str1 || !str2)
// 		return (NULL);
// 	len_str1 = ft_strlen(str1);
// 	len_str2 = ft_strlen(str2);
// 	memory_space = malloc(sizeof(char) * (len_str1 + len_str2 + 1));
// 	if (!memory_space)
// 		return (NULL);
// 	ft_memcpy(memory_space, str1, len_str1);
// 	ft_memcpy((memory_space + len_str1), str2, (len_str2 + 1));
// 	return (memory_space);
// }