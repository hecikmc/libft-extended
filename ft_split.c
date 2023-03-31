/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:09:23 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/01 17:10:52 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cwords(char const *str, char s)
{
	int	i;
	int	nwords;

	i = 0;
	nwords = 0;
	while (str[i])
	{
		while (str[i] == s && str[i] != 0)
			i++;
		while (str[i] != s && str[i] != 0)
		{
			if (str[i + 1] == s || str[i + 1] == 0)
				nwords++;
			i++;
		}
	}
	return (nwords);
}

static char	*ft_word(char const *str, char s)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != s && str[i] != 0)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	word[i] = 0;
	i = 0;
	while (str[i] != s && str[i] != 0)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		is;
	int		i;

	is = 0;
	i = 0;
	split = malloc(sizeof(char *) * (ft_cwords(str, c) + 1));
	if (!split)
		return (0);
	split[ft_cwords(str, c)] = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != 0)
			i++;
		if (str[i] != c && str[i] != 0)
		{
			split[is] = ft_word(&str[i], c);
			is++;
		}
		while (str[i] != c && str[i] != 0)
			i++;
	}
	return (split);
}
