/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:54:09 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/17 08:47:46 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	*p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/*
** void	main()
** {
** 	char nome[] = "amet";
** 
** 	printf("%s\n", (unsigned char *)ft_memset(nome, '#', 5));
** 	printf("%s\n", (unsigned char *)memset(nome, '#', 5));
** }
*/
