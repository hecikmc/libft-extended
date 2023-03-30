/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:57:00 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:36:31 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

/*
La función ft_lstdelone elimina y libera la memoria de un elemento 
de la lista enlazada lst, utilizando la función 'del' para 
liberar la memoria del contenido del elemento.
Finalmente, establece el puntero lst en un puntero nulo.

The ft_lstdelone function removes and frees the memory of an element
from the linked list lst, using the 'del' function for
free the memory of the element content.
Finally, it sets the lst pointer to a null pointer.
*/