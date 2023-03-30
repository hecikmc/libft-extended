/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:42:43 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:53:12 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		r;
	size_t	i;

	r = 0;
	i = 0;
	while (r == 0 && i < n && (s1[i] != 0 || s2[i] != 0))
	{
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (r);
}

/*
Compara los primeros n caracteres de las cadenas s1 y s2.
Devuelve un valor entero menor, igual o mayor que cero según si s1 es menor,
igual o mayor que s2 lexicográficamente.
El valor absoluto del resultado indica la diferencia entre los caracteres
que difieren entre s1 y s2.

Compare the first n characters of the strings s1 and s2.
Returns an integer value less than, equal to, or greater than zero depending 
on whether s1 is less than, equal to or greater than s2 lexicographically.
The absolute value of the result indicates the difference between the characters
that differ between s1 and s2.
*/