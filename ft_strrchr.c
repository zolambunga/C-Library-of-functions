/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:24:37 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/24 03:39:59 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *resultado = NULL; // Ponteiro pra armazenar a última ocorrência
	while (*str != '\0')
	{                                // prcrre a string até o final
		if (*str == (char)c)        
			// Verifica se o caractere atual é o buscado
			resultado = (char *)str; // Atualiza o ponteiro resultado
		str++;                       // Avança para o próximo caractere
	}
	if (c == '\0')
		return ((char *)str);
			// Retorna o ponteiro para o terminador nulo se c for '\0'
	return (resultado);       // Retorna a última ocorrência ou NULL
}
