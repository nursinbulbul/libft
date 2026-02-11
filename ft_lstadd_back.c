/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:13:56 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 16:50:38 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;
    
    if (!new || !lst)
    {
        return;
    }
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    
    temp = *lst;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
}
// #include <stdio.h>
// int main()
// {
//     t_list *head;
//     t_list *head2;
//     t_list *head3;
//     head = ft_lstnew(ft_strdup("nursin"));
//     head2 = ft_lstnew(ft_strdup("bulbul"));
//     head->next = head2;
//     head2->next = NULL;
    
//     t_list *new;
//     new = ft_lstnew(ft_strdup("12"));

//     ft_lstadd_back(&head, new);
//     printf("%s" , (char *)head2->next->content);
// }