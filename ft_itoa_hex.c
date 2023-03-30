/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:48:59 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/29 19:34:21 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_ndigitx(unsigned long n)
{
	size_t	digit;

	digit = 1;
	if (n >= 0 && n <= 15)
		return (digit);
	while (n > 15)
	{
		digit++;
		n = n / 16;
	}
	return (digit);
}

char	*ft_itoa_x(unsigned long n)
{
	char			*numx;
	char			*hex;
	size_t			i;

	hex = "0123456789abcdef";
	i = ft_ndigitx(n);
	numx = (char *) malloc(sizeof(char) * (i + 1));
	if (!numx)
		return (0);
	numx[i] = 0;
	i--;
	if (n == 0)
		numx[0] = hex[n];
	while (n > 0)
	{
		numx[i] = hex[n % 16];
		n = n / 16;
		i--;
	}
	return (numx);
}
