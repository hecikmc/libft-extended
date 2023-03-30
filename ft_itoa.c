/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:14:29 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 17:56:01 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ndigit(long n)
{
	size_t	digit;

	digit = 1;
	if (n >= 0 && n < 10)
		return (digit);
	else if (n < 0)
	{
		n = -n;
		digit++;
	}
	while (n > 9)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*strn;
	size_t	digits;
	long	nb;

	nb = n;
	digits = ft_ndigit(nb);
	strn = (char *) malloc(sizeof (char) * (digits + 1));
	if (!strn)
		return (0);
	strn[digits--] = 0;
	if (nb < 0)
	{
		strn[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		strn[0] = '0';
	while (nb > 0)
	{
		strn[digits] = (char)((nb % 10) + 48);
		digits--;
		nb = nb / 10;
	}
	return (strn);
}

/*
Convierte una variable int en string, se usa una función extra que cuenta el num 
de digitos del entero para realizar la reserva de memoria dinámica con malloc. 
Se rellena el array desde la última posición hasta la primera. 
Si ocurre un error de asignación de memoria, la función devuelve un puntero nulo.

Converts an int variable to a string, using an extra function that counts the num
of digits of the integer to perform the allocation of dynamic memory with malloc.
The array is filled from the last position to the first.
If a memory allocation error occurs, the function returns a null pointer.
*/