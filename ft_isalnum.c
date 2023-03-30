/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:13:29 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:49:59 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

/* 
Esta función recibe un int correspondiente al ASCII de un caracter:
Devuelve 1 si corresponde a una letra (mayúscula o minúscula) 
o si es un DIGITO y 0 si no lo es. 

This function receives an integer corresponding to the ASCII
code of a character: It returns 1 if it corresponds to a letter
(uppercase or lowercase) or if it is a DIGIT, and 0 if it does not.
*/