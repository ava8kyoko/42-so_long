/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:45:24 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/02 00:46:00 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	strncmp_rev(const char *bigger, const char *smaller, size_t len)
{
	char	*big;
	size_t	len_bigger;

	if (!(bigger && smaller && len))
		return (0);
	len_bigger = ft_strlen(bigger);
	if (len_bigger > len)
	{
		big = (char *)(bigger + (len_bigger - len));
		--len;
		while (big[len] && smaller[len] && big[len] == smaller[len])
			if (!len--)
				return (len_bigger);
	}
	return (0);
}
