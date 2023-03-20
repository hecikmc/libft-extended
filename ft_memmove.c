/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:22:50 by jmerchan          #+#    #+#             */
/*   Updated: 2022/12/09 13:16:04 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*strdest;
	char	*strsrc;
	size_t	i;

	strdest = (char *)dest;
	strsrc = (char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (strdest > strsrc)
	{
		while (n--)
			strdest[n] = strsrc[n];
	}
	else
	{
		while (i < n)
		{
			strdest[i] = strsrc[i];
			i++;
		}
	}
	return (dest);
}

/* 
Esta función recibe un puntero (destino), un puntero (origen) 
y un número de bytes
Copia origen en destino n veces. Devuelve el puntero dest modificado
con el resultado de la copia.
Si origen es más pequeño de destino, lo copiamos desde el final hasta
el principio para no pisar memoria que pudieran compartir. 
De lo contrario lo copiamos desde el inicio. 
 */