/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:33:32 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 11:50:50 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr_gnl(char const *str, unsigned int start, size_t size_tocopy)
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
