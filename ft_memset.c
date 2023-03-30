/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:01:29 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:44:51 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	s = str;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return ((void *)s);
}

/* 
Esta función recibe un puntero (str), un caracter (c) 
y un número de bytes (n) Copia el caracter c en el puntero n veces. 

This function receives a pointer (str), a character (c)
y a number of bytes (n) Copies the character c to the pointer n times.
*/