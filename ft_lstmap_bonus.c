/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:19:37 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/14 18:39:25 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;

	res = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, aux);
		lst = lst->next;
	}
	return (res);
}

/*
La función ft_lstmap crea una nueva lista enlazada mediante la aplicación de 
la función f a cada elemento de la lista lst.
Si ocurre un error durante la creación de la nueva lista, se llama a 
la función del para liberar la memoria de todos los elementos de la lista.
Finalmente, devuelve un puntero a la nueva lista enlazada.

The ft_lstmap function creates a new linked list by applying
the function f to each element of the list lst.
If an error occurs during the creation of the new list, then
the function del to free the memory of all the elements of the list.
Finally, it returns a pointer to the new linked list.
*/