/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:11:27 by jmerchan          #+#    #+#             */
/*   Updated: 2023/01/11 17:49:36 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int l)
{
	if ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'))
		return (1);
	return (0);
}

/* Esta función recibe un int correspondiente al ASCII de un caracter:
Devuelve 1 si corresponde a una letra (mayúscula o minúscula) o 0 si no lo es. */