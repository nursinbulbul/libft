/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:19:11 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 14:16:08 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlst;

    if (!lst || !f || !del)
    {
        return(NULL);
    }
    
    while (lst)
    {
        ft_lstnew(f(newlst->content));
        if (!newlst)
        {
            ft_lstclear(&newlst, del);
            newlst = NULL;
        }
        ft_lstadd_back(&newlst,newlst);
        lst = lst->next;
    }
    
    return(newlst);
}