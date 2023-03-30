/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:50:08 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:51:08 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	size;
	int		i;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *) malloc(sizeof (char) * (size + 1));
	if (!join)
		return (0);
	i = ft_strlen(s1);
	ft_memcpy(join, s1, i);
	ft_memcpy(&join[i], s2, ft_strlen(s2));
	join[size] = 0;
	return (join);
}

/*
Crea una nueva cadena que es el resultado de concatenar s1 y s2.
Si s1 o s2 son NULL, devuelve NULL.
La memoria de la nueva cadena se asigna con malloc.
Devuelve la nueva cadena o NULL si falla la asignación de memoria.

Creates a new string that is the result of concatenating s1 and s2.
If s1 or s2 are NULL, returns NULL.
The memory of the new string is allocated with malloc.
Returns the new string or NULL if memory allocation fails.
*/