/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:26:34 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 14:51:13 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}
#include <stdio.h>
int main()
{
t_list *root = ft_lstnew(ft_strdup("yagmur"));

t_list *node = ft_lstnew(ft_strdup("nursin"));
t_list *new = ft_lstnew(ft_strdup("42"));

root->next = node;
node->next = NULL;

ft_lstadd_front(&root,new);

printf("%s", (char *)new->next->content);
}