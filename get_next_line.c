/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:29:16 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/29 19:37:04 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_strjoin_free(char *s1, char const *s2)
{
	char	*join;
	size_t	size;
	int		i;

	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *) ft_calloc(sizeof (char), (size + 1));
	i = ft_strlen(s1);
	ft_memcpy(join, s1, i);
	ft_memcpy(&join[i], s2, ft_strlen(s2));
	join[size] = 0;
	free(s1);
	return (join);
}

char	*ft_getbuffer(char *str)
{
	char	*buffer;
	int		i;
	int		ib;

	i = 0;
	ib = 0;
	while (str[i] != 0 && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free (str);
		return (0);
	}
	if (str[i] == '\n')
		i++;
	buffer = ft_calloc(sizeof(char), (ft_strlen(str) - i + 1));
	while (str[i] != 0)
		buffer[ib++] = str[i++];
	buffer[ib] = 0;
	free(str);
	return (buffer);
}

char	*ft_oneline(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	line = ft_calloc(sizeof(char), i + 2);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = 0;
	return (line);
}

char	*ft_readf(int fd, char *str)
{
	int		total_bytes;
	char	*tmp;

	total_bytes = 1;
	tmp = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	while (total_bytes > 0)
	{
		total_bytes = read(fd, tmp, BUFFER_SIZE);
		if (total_bytes <= 0)
			break ;
		tmp[total_bytes] = 0;
		str = ft_strjoin_free(str, tmp);
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(tmp);
	if (total_bytes < 0)
	{
		free (str);
		return (0);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	char		*res;
	static char	*tmp[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	tmp[fd] = ft_readf(fd, tmp[fd]);
	if (!tmp[fd])
	{
		free(tmp[fd]);
		return (0);
	}
	res = ft_oneline(tmp[fd]);
	tmp[fd] = ft_getbuffer(tmp[fd]);
	return (res);
}
