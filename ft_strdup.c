/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:53:15 by jmerchan          #+#    #+#             */
/*   Updated: 2022/12/09 13:16:04 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;

	copy = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (copy == 0)
		return (0);
	copy = ft_memcpy(copy, s, ft_strlen(s));
	copy[ft_strlen(s)] = 0;
	return (copy);
}

/*
Esta función recibe un string (const) y devuelve un puntero (string) de una 
copia del string recibido. Esta acción la realiza con una reserva de memoria
mediante malloc. 
*/