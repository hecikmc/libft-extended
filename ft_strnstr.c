/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:46:04 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:54:14 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *word, size_t len)
{
	size_t	i;
	size_t	sizeword;

	i = 0;
	sizeword = ft_strlen(word);
	if (sizeword == 0)
		return ((char *)str);
	if (ft_strlen(str) == 0)
		return (NULL);
	while ((i + sizeword) <= len)
	{
		if (ft_strncmp(str + i, word, sizeword) == 0)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
Busca la primera aparición de la subcadena "word" en la cadena "str",
limitando la búsqueda a los primeros "len" caracteres de "str".
Si se encuentra la subcadena, devuelve un puntero a su primera 
ocurrencia en "str".
Si no se encuentra la subcadena, devuelve NULL.

Finds the first occurrence of the substring "word" in the string "str",
limiting the search to the first "len" characters of "str".
If the substring is found, it returns a pointer to its first
occurrence in "str".
If the substring is not found, it returns NULL.
*/