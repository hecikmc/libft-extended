/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:04:26 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 19:00:22 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
Convierte el caracter "c" a su correspondiente en mayúscula, si es una 
letra minúscula.
Si "c" no es una letra minúscula, devuelve "c" sin cambios.
Devuelve el caracter convertido o sin cambios como un entero.

Converts the character "c" to its corresponding uppercase, if it is a
lowercase letter.
If "c" is not an lowercase letter, return "c" unchanged.
Returns the converted or unchanged character as an integer.
*/