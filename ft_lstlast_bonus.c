/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:15:04 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:38:21 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

/*
La función ft_lstlast devuelve el último elemento de la lista enlazada lst.
Si lst es un puntero nulo, devuelve un puntero nulo.


The ft_lstlast function returns the last element of the linked list lst.
If lst is a null pointer, it returns a null pointer.
*/