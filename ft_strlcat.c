/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:58:21 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:49:50 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i_d;
	size_t	i_s;
	size_t	size_dest;

	i_d = ft_strlen(dest);
	i_s = 0;
	size_dest = ft_strlen(dest);
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (i_s < size - size_dest - 1 && src[i_s] != 0)
	{
		dest[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dest[i_d] = 0;
	return (size_dest + ft_strlen(src));
}

/*
Esta función recibe un string destino, un string origen y un tamaño
Copia origen en destino al final de destino. 
Si el tamaño recibido es MENOR o IGUAL que el tamaño de destino
	Devuelve el tamaño del origen + el tamaño a copiar
	Y no copia nada ya que no hay espacio disponible
Si el tamaño recibido es MAYOR
	Concatena origen en destino hasta llegar al final de origen o
	el tamaño recibido - lo que mide destino 

This function receives a destination string, a source string and a size
Copy source to destination to end of destination.
If the received size is LESS than or EQUAL to the destination size
Returns the size of the source + the size to copy
And it doesn't copy anything as there is no space available
If the received size is LARGER
Concatenates source to destination until reaching the end of source or
the size received - what measures destination
*/