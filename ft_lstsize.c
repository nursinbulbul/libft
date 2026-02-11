/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:59:51 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 15:12:26 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int ft_lstsize(t_list *lst)
{
    int n;
    n = 0;
    
    if (lst == NULL)
        return(1);
    while (lst != NULL)
    {
        n++;
        lst = lst->next;
    }
    
    return(n);
}

#include <stdio.h>
int main()
{
    t_list *head;
    t_list *head2;
    t_list *head3;
    t_list *head4;
    head = ft_lstnew(ft_strdup("1"));
    head2 = ft_lstnew(ft_strdup("2"));
    head3 = ft_lstnew(ft_strdup("3"));
    head4 = ft_lstnew(ft_strdup("4"));

    head->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;
    
    printf("%d", ft_lstsize(head));
}