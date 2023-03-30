/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:42:11 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:52:29 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	res = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	while (s[i] != 0)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/*
Esta función aplica sobre cada caracter de la cadena S la función F 
(cadena de char) que devuelve un char y devuelve el resultado en un 
nuevo string (res).
Es necesario reservar memoria por cada caracter de s + 1 para el nulo 
del final.

This function applies to each character of the string S the function F
(string char) which returns a char and returns the result in a
new string(res).
It is necessary to reserve memory for each character of s + 1 for 
the trailing null.
*/