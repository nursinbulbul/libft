/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:07:24 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 16:00:36 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void f(void *p)
{
    char *temp;
    temp = (char *)p;
    int i = 0;
    while (temp[i] != '\0')
    {
        temp[i] = (char)ft_toupper((int)temp[i]);
        i++;
    }    
}
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
#include <stdio.h>
int main()
{
    t_list *head;
    t_list *head2;
    t_list *head3;
    t_list *head4;

    head = ft_lstnew(ft_strdup("nursin"));
    head2 = ft_lstnew(ft_strdup("bulbul"));
    head3 = ft_lstnew(ft_strdup("yakup"));
    head4 = ft_lstnew(ft_strdup("karatay"));

    head->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;

    ft_lstiter(head, f);
    printf("%s\n", (char *)head->content);
    printf("%s\n", (char *)head2->content);
    printf("%s\n", (char *)head3->content);
}