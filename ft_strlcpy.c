/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:29:38 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:50:06 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = ft_strlen(src);
	if (size > 0)
	{
		while (i < size - 1 && src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (s);
}

/*
Esta función recibe un string dest, un string origen y un tamaño.
Copia origen en destino hasta el tamaño indicado. Añadiendo un nulo al final
Devuelve el tamaño de origen. 

This function receives a dest string, a source string, and a size.
Copy source to destination up to the indicated size. Adding a null at the end
Returns the source size.
*/