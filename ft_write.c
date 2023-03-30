/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:35:42 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/30 13:05:11 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_c(int c, int *total)
{
	write (1, &c, 1);
	*total = *total + 1;
}

void	ft_putstr_c(char *str, int *cont)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != 0)
	{
		ft_putchar_c(str[i], cont);
		i++;
	}
}

/*
This functions are used by ft_printf to print char and strings
*/