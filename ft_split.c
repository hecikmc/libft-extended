/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:09:23 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:48:34 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cwords(char const *str, char s)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (str[i])
	{
		while (str[i] == s && str[i] != 0)
			i++;
		while (str[i] != s && str[i] != 0)
		{
			if (str[i + 1] == s || str[i + 1] == 0)
				nwords++;
			i++;
		}
	}
	return (nwords);
}

static char	*ft_word(char const *str, char s)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != s && str[i] != 0)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	word[i] = 0;
	i = 0;
	while (str[i] != s && str[i] != 0)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		is;
	int		i;
	int		nwords;

	is = 0;
	i = 0;
	nwords = ft_cwords(str, c);
	split = malloc(sizeof(char *) * (nwords + 1));
	if (!split)
		return (0);
	split[nwords] = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != 0)
			i++;
		if (str[i] != c && str[i] != 0)
		{
			split[is] = ft_word(&str[i], c);
			is++;
		}
		while (str[i] != c && str[i] != 0)
			i++;
	}
	return (split);
}

/*
La función ft_split divide una cadena str en subcadenas utilizando el carácter 
c como separador.
Devuelve un puntero a una matriz de cadenas (es decir, un array 
de punteros a cadenas) que contienen las subcadenas.
El último elemento de la matriz debe ser NULL.
Si falla la asignación de memoria, devuelve NULL.

The ft_split function splits a string str into substrings using the character
c as separator.
Returns a pointer to an array of strings (that is, an 
array of pointers to strings) containing the substrings.
The last element of the array must be NULL.
If memory allocation fails, it returns NULL.
*/