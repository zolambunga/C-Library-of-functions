/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 09:27:57 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/20 17:32:36 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const char *psrc = (const char *)src;
	char *pdest = (char *)dest;
	
	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}

/*int	main(int ac, char *b[])
{
	if (ac == 1)
		return (0);
	char *str = b[1];
	char d[strlen(b[2])];
	char *f = (char *)ft_memcpy(d, str, sizeof(d));
	printf("%s %s \n", d, f);
	return 0;
}*/
