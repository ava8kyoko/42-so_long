/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:45:24 by mchampag          #+#    #+#             */
/*   Updated: 2022/10/27 15:25:41 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

bool	strncmp_rev(const char *bigger, const char *smaller, size_t len)
{
	if (len == 0)
		return (0);
	--len;
	while (bigger[len] && smaller[len] && bigger[len] == smaller[len])
	{
		if (!len--)
			return (1);
	}
	return (0);
}
