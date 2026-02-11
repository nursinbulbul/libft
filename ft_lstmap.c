/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:19:11 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 16:51:55 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *p)
{
    free(p);
}
void *f(void *s)
{
    int i = 0;

    char *temp = (char *)s;

    char *new = ft_strdup(temp);
    if (!new)
    {
        return(NULL);
    }
    
    while (new[i] != '\0')
    {
        new[i] = (char)ft_tolower(new[i]);
        i++;
    }
    return(new);
    
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlst;
    t_list *newnode;
    void *newcontent;
    
    if (!lst || !f || !del)
    {
        return(NULL);
    }
    
    newlst = NULL;
    while (lst)
    {
        newcontent = f(lst->content);
        newnode = ft_lstnew(newcontent);
        if (!newnode)
        {
            del(newcontent);
            ft_lstclear(&newlst, del);
            return(NULL);
        }
        ft_lstadd_back(&newlst,newnode);
        lst = lst->next;
    }
    
    return(newlst);
}
#include <stdio.h>
int main()
{
       t_list *head;
       t_list *head2;
       t_list *head3;
       t_list *head4;

       head = ft_lstnew(ft_strdup("NURSIN"));
       head2 = ft_lstnew(ft_strdup("BULBUL"));
       head3 = ft_lstnew(ft_strdup("YAKUP"));
       head4 = ft_lstnew(ft_strdup("KARATAY"));

       head->next = head2;
       head2->next = head3;
       head3->next = head4;
       head4->next = NULL;

       t_list *newhead;

       newhead = ft_lstmap(head,f,del);
       
       printf("%s\n", (char *)newhead->content);
       printf("%s\n", (char *)newhead->next->content);
       printf("%s\n", (char *)newhead->next->next->content);
       printf("%s\n", (char *)newhead->next->next->next->content);
       
       ft_lstclear(&head, del);
       ft_lstclear(&newhead, del);
       
}