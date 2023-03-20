/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:46:04 by jmerchan          #+#    #+#             */
/*   Updated: 2022/12/09 13:16:04 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *word, size_t len)
{
	size_t	i;
	size_t	sizeword;

	i = 0;
	sizeword = ft_strlen(word);
	if (sizeword == 0)
		return ((char *)str);
	if (ft_strlen(str) == 0)
		return (NULL);
	while ((i + sizeword) <= len)
	{
		if (ft_strncmp(str + i, word, sizeword) == 0)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
