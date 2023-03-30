/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:54:38 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:46:53 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*r;

	i = 0;
	r = (char *) str;
	if ((char)c == 0)
		return (&r[ft_strlen(r)]);
	while (r[i] != 0)
	{
		if (r[i] == (char)c)
			return (&r[i]);
		i++;
	}
	return (0);
}

/*
Busca un caracter c en la cadena str, devuelve el puntero a la primera 
coincidencia encontrada en str. Si c es nulo, devuelve la cadena entera. 
Si no localiza c devuelve nulo.

Searches for a character c in the string str, returns the pointer to the first
match found on str. If c is null, returns the entire string.
If it doesn't locate c, it returns null.
*/