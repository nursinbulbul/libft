/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:14:57 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 16:24:03 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del (void *s)
// {
//     free(s);
// }

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    
    if (!*lst || !del)
    {
        return;
    }
    
    while (*lst)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst) = temp;
    }
    
    *lst = NULL;
}
// #include <stdio.h>
// int main()
// {
//     t_list *head;
//     t_list *head2;
//     t_list *head3;

//     head = ft_lstnew(ft_strdup("nursin"));
//     head2 = ft_lstnew(ft_strdup("bulbul"));
//     head3 = ft_lstnew(ft_strdup("42"));

//     head->next = head2;
//     head2->next = head3;
//     head3->next = NULL;

//     ft_lstclear(&head3, del);

//     printf("%s" , (char *)head2->next->content);
// }