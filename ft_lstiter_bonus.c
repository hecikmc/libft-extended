/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:10:26 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:37:31 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (lst)
	{
		aux = lst;
		while (aux)
		{
			f(aux->content);
			aux = aux->next;
		}
	}
}

/*
La función ft_lstiter itera sobre los elementos de la lista enlazada 
lst y aplica la función 'f' a cada elemento.
La función f toma un puntero al contenido del elemento como argumento.

The ft_lstiter function iterates over the elements of the linked list
lst and applies the 'f' function to each element.
The function f takes a pointer to the element's content as an argument.
*/