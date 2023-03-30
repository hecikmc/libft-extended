/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:18:39 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:52:02 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != 0 && s1[start] != 0)
		start++;
	while (ft_strchr(set, s1[end]) != 0 && end > start)
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}

/*
Elimina de la cadena s1 los caracteres de set por el inicio y por el final 
de s1 hasta encontrar una diferencia. 

Removes the start and end set characters from the string s1
of s1 until a difference is found.
*/