/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 09:27:57 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/21 16:55:15 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*psrc = (const char *)src;
	char		*pdest;

	pdest = (char *)dest;
	while (n-- > 0)
		*pdest++ = *psrc++;
	return (dest);
}
