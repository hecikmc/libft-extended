/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:52:09 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:31:45 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = ft_lstlast(*lst);
	if (aux)
		aux->next = new;
	else
		*lst = new;
}

/*
La función ft_lstadd_back agrega el elemento new al final de la 
lista enlazada lst.
Si lst es un puntero nulo, se considera que la lista está vacía y 
new se convierte en la cabeza de la lista.

The function ft_lstadd_back adds the new element to the end of the
linked list lst.
If lst is a null pointer, the list is considered to be empty and
new becomes the head of the list.
*/