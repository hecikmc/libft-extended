/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:44:39 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:40:10 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof (t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}

/*
La función ft_lstnew crea un nuevo elemento de la lista enlazada con 
el contenido content.
Si ocurre un error durante la asignación de memoria, devuelve un puntero nulo.
De lo contrario, devuelve un puntero al nuevo elemento de la lista enlazada.

The function ft_lstnew creates a new element of the linked list with
the content content.
If an error occurs during memory allocation, it returns a null pointer.
Otherwise, it returns a pointer to the new element of the linked list.
*/