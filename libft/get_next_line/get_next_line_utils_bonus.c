/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:16:06 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/26 17:06:57 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str)
	{
		if (*str == (char)character)
			return ((char *)str);
		str++;
	}
	if (character == 0)
		return ((char *) str);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	i;
	size_t	len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	i = -1;
	while (src[++i] != 0 && len--)
		dst[i] = src[i];
	dst[i] = 0;
	return (dst);
}

char	*ft_strjoin(char const *str1, char const *str2)
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

char	*ft_substr(char const *str, unsigned int start, size_t size_tocopy)
{
	char			*dst;
	size_t			i;
	unsigned int	len_s;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		size_tocopy = 0;
	else if (ft_strlen(str) < (start + size_tocopy))
		size_tocopy = ft_strlen(str) - start;
	dst = malloc(sizeof(char) * (size_tocopy + 1));
	if (!dst)
		return (NULL);
	len_s = (unsigned int)ft_strlen(str);
	i = 0;
	while (str[start] != 0 && start <= len_s && size_tocopy--)
		dst[i++] = str[start++];
	dst[i] = 0;
	return (dst);
}
