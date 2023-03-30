/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:04:56 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:41:29 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*
La función ft_memchr busca la primera aparición del carácter c en 
los primeros n bytes de la cadena s.
Si se encuentra c, devuelve un puntero al byte correspondiente en s.
De lo contrario, devuelve un puntero nulo.

The ft_memchr function finds the first occurrence of the character c in
the first n bytes of the string s.
If c is found, it returns a pointer to the corresponding byte in s.
Otherwise, it returns a null pointer.
*/