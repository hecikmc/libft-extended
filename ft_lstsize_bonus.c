/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:36 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:40:42 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	size = 0;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		size++;
	}
	size++;
	return (size);
}

/*
La función ft_lstsize devuelve la longitud de la lista enlazada lst.
Si lst es un puntero nulo, devuelve 0.

The ft_lstsize function returns the length of the linked list lst.
If lst is a null pointer, it returns 0.
*/