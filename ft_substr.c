/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:06:26 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:58:31 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
	{
		return (ft_strdup(""));
	}
	if (len > (ft_strlen(s) - (size_t)start))
		len = ft_strlen(s) - (size_t)start;
	sub = (char *) malloc (sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}

/*
Crea una nueva cadena con los caracteres de "s" que comienzan en "start" y
se extienden por "len" bytes. La nueva cadena se termina con un '\0'.
Si "start" es mayor que la longitud de "s", devuelve una cadena vacía.
Si no hay suficientes caracteres en "s" para crear la nueva cadena,
se crea la cadena más larga posible.
Devuelve la nueva cadena, o NULL si falla la asignación de memoria.


Creates a new string with the characters of "s" starting at "start" and
are spanned by "len" bytes. The new string is terminated with a '\0'.
If "start" is greater than the length of "s", it returns an empty string.
If there are not enough characters in "s" to create the new string,
the longest possible chain is created.
Returns the new string, or NULL if memory allocation fails.
*/