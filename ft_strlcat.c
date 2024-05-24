/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:25:46 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/24 03:16:44 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcat function using while loops
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	// calcula o tamanho inicial de dst e src
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	// Se dstsize for 0 ou dst ser mais longo
	// que dstsize, retorna o tamanho requerido
	if (dstsize == 0 || dst_len >= dstsize)
		return (dstsize + src_len);
	// Append src to dst
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	// Null-terminate the result
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
** int main() {
**     char dst[20] = "Hello";
**     const char *src = " World";
**     size_t dstsize = sizeof(dst) / sizeof(dst[0]);
**
**     size_t result = strlcat(dst, src, dstsize);
**     printf("Result: %zu, dst: %s\n", result, dst);
**
**     return (0);
** }
*/
