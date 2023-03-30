/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:22:29 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/29 19:34:19 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

char	*ft_itoa_c(int n)
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

char	*ft_itoa_uc(unsigned int n)
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
