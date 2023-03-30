/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:40:14 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:53:00 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int p)
{
	if (p >= 32 && p <= 126)
		return (1);
	return (0);
}

/* 
Esta función recibe un int correspondiente al ASCII de un caracter:
Devuelve 1 si corresponde a un valor de la tabla ASCII que sea imprimible 

This function receives an int corresponding to the ASCII of a character:
Returns 1 if it corresponds to an ASCII table value that is printable
*/