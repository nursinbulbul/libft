/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:07:24 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 14:18:10 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void(*f)(void *))
{
    if (!lst || !f)
    {
        return;
    }
    
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
    
}