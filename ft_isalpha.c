/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:11:27 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:51:32 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int l)
{
	if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
		return (1);
	return (0);
}

/* 
Esta función recibe un int correspondiente al ASCII de un caracter:
Devuelve 1 si corresponde a una letra (mayúscula o minúscula) o 0 si no lo es. 

This function receives an integer corresponding to the ASCII code of
a character: It returns 1 if it corresponds to a letter
(uppercase or lowercase) or 0 if it does not.
*/