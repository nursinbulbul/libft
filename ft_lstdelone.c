/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:03:16 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 15:39:16 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del (void *s)
{
    free(s);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
    {
        return;
    }
    del(lst->content);
    free(lst);
}
#include <stdio.h>
int main()
{
    t_list *head;
    t_list *head2;
    t_list *head3;
    
    head = ft_lstnew(ft_strdup("nursin"));
    head2 = ft_lstnew(ft_strdup("bulbul"));
    head3 = ft_lstnew(ft_strdup("42"));

    head->next = head2;
    head2->next = head3;
    head3->next = NULL;
    
    ft_lstdelone(head2, del);
    
    printf("%s", (char *)head2->next->content);
}