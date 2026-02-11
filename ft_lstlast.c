/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:08:10 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:59:54 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	n;

	n = 0;
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		n++;
		lst = lst->next;
	}
	return (lst);
}
