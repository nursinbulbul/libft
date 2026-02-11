/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:08:10 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 15:18:57 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    int n;
    n = 0;
    if (lst == NULL)
        return(lst);
    
    while (lst->next != NULL)
    {
        n++;
        lst = lst->next;
    }
    return(lst);
    
}
#include <stdio.h>
int main()
{
    t_list *head;
    t_list *head2;
    head = ft_lstnew(ft_strdup("nursin"));
    head2 = ft_lstnew(ft_strdup("bulbul"));

    head->next = head2;
    head2->next = NULL;
    
    t_list *head3;
    head3 = ft_lstlast(head);

    printf("%s" , (char *)head3->content);
    
}