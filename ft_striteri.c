/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:15:40 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:48:52 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

/*
Esta función itera sobre un string y aplica a cada caracter de la cadena
una función "f". No devuelve nada ya que puede modificar el valor de cada 
caracter. 

This function iterates over a string and applies to each character in the string
an "f" function. It does not return anything since you can modify the 
value of each character.
*/