/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:22:59 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:43:19 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* 
La función ft_bzero establece los primeros n bytes del área de memoria 
a los cuales apunta el puntero s a cero (bytes con valor 0).
Si n es 0, la función no hace nada.

The ft_bzero function sets the first n bytes of the memory area 
pointed to by s to zero (bytes with value 0).
If n is 0, the function does nothing.
*/