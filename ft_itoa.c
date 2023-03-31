/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:14:29 by jmerchan          #+#    #+#             */
/*   Updated: 2022/12/09 19:03:19 by jmerchan         ###   ########.fr       */
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
Convierte un int en un string, se usa una función extra que cuenta el num 
de digitos del entero para realizar la reserva de memoria con malloc. 
En caso de ser un número negativo se contabiliza un digito de más para el 
signo negativo. 
Se rellena el array desde la última posición hasta la primera. 
Lo primero que se rellena es el nulo del final del string y luego 
los restos de la descomposición del número. 
*/