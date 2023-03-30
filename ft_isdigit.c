/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:58:36 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:52:34 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

/* 
Esta función recibe un int correspondiente al ASCII de un caracter:
Devuelve 1 si corresponde a un DIGITO o 0 si no lo es. 

This function receives an int corresponding to the ASCII of a character:
Returns 1 if it corresponds to a DIGIT or 0 if it is not.
*/