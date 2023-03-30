/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:29:09 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:45:51 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*r;

	r = malloc(n * size);
	if (r == 0)
		return (0);
	ft_bzero(r, (n * size));
	return (r);
}

/*
La función ft_calloc asigna suficiente espacio en la memoria para un array 
de n elementos de tamaño size cada uno, devuelve un puntero al primer 
elemento del array.
El espacio asignado se inicializa a cero.
Si n o size es 0, la función devuelve un puntero nulo.

The ft_calloc function allocates enough space in memory for an array
of n elements of size size each, and returns a pointer
to the first element of the array.
The allocated space is initialized to zero.
If n or size is 0, the function returns a null pointer.
*/