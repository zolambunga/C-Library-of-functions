/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:25:41 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/24 03:16:51 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		src_len;
	size_t		copy_len;
	const char	*s;

	i = 0;
	s = src;
	src_len = 0;
	// Calcula o comprimento da string de origem
	while (*s++)
		src_len++;
	if (size > 0)
	{
		if (src_len >= size)
		{
			copy_len = (size - 1);
		}
		else
		{
			copy_len = src_len;
		}
		while (i < copy_len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[copy_len] = '\0';
	}
	return (src_len);
}
