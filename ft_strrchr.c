/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:08:01 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:56:33 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*r;

	r = (char *) str;
	i = ft_strlen(r);
	if ((char)c == 0)
		return (&r[i]);
	while (i >= 0)
	{
		if (r[i] == (char)c)
			return (&r[i]);
		i--;
	}
	return (0);
}

/*
Busca la última aparición del caracter "c" en la cadena "str".
Si se encuentra el caracter, devuelve un puntero a su ubicación en "str".
Si no se encuentra el caracter, devuelve NULL.

Finds the last occurrence of the character "c" in the string "str".
If the character is found, it returns a pointer to its location in "str".
If the character is not found, it returns NULL.
*/