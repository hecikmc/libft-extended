/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:30:34 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:52:05 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*
Esta función recibe un int correspondiente al ASCII de un caracter:
Devuelve 1 si corresponde a un valor de la tabla ASCII 

This function receives an int corresponding to the ASCII of a character:
Returns 1 if it corresponds to a value from the ASCII table
*/