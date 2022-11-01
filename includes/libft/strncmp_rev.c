/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:45:24 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/01 12:37:35 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	strncmp_rev(const char *bigger, const char *smaller, size_t len)
{
	char	*big;
	size_t	len_bigger;
	
	if (len == 0)
		return (0);
	len_bigger = ft_strlen(bigger);
	if (len_bigger > len)
	{
		big = bigger + (len_bigger - len);
		--len;
		while (bigger[len] && smaller[len] && bigger[len] == smaller[len])
		{
			if (!len--)
				if (bigger[len])
					return (len_bigger);
		}
	}
	return (0);
}
