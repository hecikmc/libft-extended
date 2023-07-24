/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:12:44 by jmerchan          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/07/24 19:20:35 by jmerchan         ###   ########.fr       */
=======
/*   Updated: 2023/07/24 19:20:35 by jmerchan         ###   ########.fr       */
>>>>>>> 25c8d23f8e10c4ca831a603755dfdeb8b92392e7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char const *s2)
{
	char	*join;
	size_t	size;
	int		i;

	if (!s1 && !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *) malloc(sizeof (char) * (size + 1));
	if (!join)
		return (0);
	i = ft_strlen(s1);
	ft_memcpy(join, s1, i);
	ft_memcpy(&join[i], s2, ft_strlen(s2));
	join[size] = 0;
	free(s1);
	return (join);
}
