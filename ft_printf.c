/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:32:45 by jmerchan          #+#    #+#             */
/*   Updated: 2023/01/30 16:42:00 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_vartype(const char v, va_list arg, int *total)
{
	char	*str;

	str = 0;
	if (v == 'c')
		ft_putchar_c(va_arg(arg, int), total);
	if (v == 's')
		ft_putstr_c(va_arg(arg, char *), total);
	if (v == 'i' || v == 'd')
		str = ft_itoa_c(va_arg(arg, int));
	if (v == 'u')
		str = ft_itoa_uc(va_arg(arg, unsigned int));
	if (v == 'p')
	{
		ft_putstr_c("0x", total);
		str = ft_itoa_x(va_arg(arg, unsigned long));
	}
	if (v == 'x' || v == 'X')
	{
		str = ft_itoa_x(va_arg(arg, unsigned int));
		if (v == 'X')
			ft_toupperstr(str);
	}
	if (v == 'i' || v == 'd' || v == 'u' || v == 'p' || v == 'x' || v == 'X')
		ft_putstr_c(str, total);
	free(str);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		total;
	size_t	i;

	total = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ft_putchar_c('%', &total);
			else
				ft_vartype(str[i], arg, &total);
		}
		else
			ft_putchar_c(str[i], &total);
		i++;
	}
	va_end(arg);
	return (total);
}
