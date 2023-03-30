/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:02:42 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:34:39 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (*lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		*lst = NULL;
	}
}

/*
La función ft_lstclear elimina y libera la memoria de todos los 
elementos de la lista enlazada lst, utilizando la función 'del' 
para liberar la memoria de cada elemento.
Finalmente, establece el puntero lst en un puntero nulo.

The ft_lstclear function clears and frees the memory of all
elements of the lst linked list, using the 'del' function
to free the memory of each element.
Finally, it sets the lst pointer to a null pointer.
*/
