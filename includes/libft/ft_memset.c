/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:56:41 by mchampag          #+#    #+#             */
/*   Updated: 2022/11/01 23:57:13 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *str, int character, size_t size_tofill)
{
	char	*new_str;

	new_str = str;
	while (size_tofill--)
		*new_str++ = (unsigned char) character;
	return (str);
}
