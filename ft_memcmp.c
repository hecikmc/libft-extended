/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:37:04 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:43:07 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] - str2[i] != 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
La función ft_memcmp compara los primeros n bytes de las áreas 
de memoria s1 y s2.
Devuelve un valor entero menor, igual o mayor que cero, según si el 
contenido de s1 es menor, igual o mayor que el contenido de s2.

The ft_memcmp function compares the first n bytes of the areas
of memory s1 and s2.
Returns an integer value less than, equal to, or greater than zero, 
depending on whether the content of s1 is less than, equal to, 
or greater than the content of s2.
*/