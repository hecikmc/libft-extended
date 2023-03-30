/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:41:32 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:40:35 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	r;

	i = 0;
	sign = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || sign == -1)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (sign * r);
}

/*
La función ft_atoi convierte una cadena (string) en un número entero (int).
La cadena debe estar formateada como un número entero válido,
y puede contener espacios en blanco y/o signo (+/-) antes del número.
Devuelve el número entero correspondiente a la cadena, o 0 si la cadena
no es un número entero válido.

The ft_atoi function converts a string to an integer.
The string must be formatted as a valid integer,
and may contain leading whitespace and/or a sign (+/-) before the number.
It returns the corresponding integer for the string, or 0 if the string 
is not a valid integer.
*/