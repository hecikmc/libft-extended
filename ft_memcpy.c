/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:41:11 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:44:13 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strd;
	char	*strs;
	size_t	i;

	strs = (char *) src;
	strd = (char *) dest;
	i = 0;
	if (!strs && !strd)
		return (0);
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return ((void *)strd);
}

/* 
Esta función recibe un puntero (destino), un puntero (origen) 
y un número de bytes
Copia origen en destino hasta n bytes. Devuelve el puntero (void) con el 
resultado de la copia.

This function receives a pointer (destination), a pointer (source)
and a number of bytes
Copy source to destination up to n bytes. Returns the pointer (void) with the
copy result.
 */