/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:59:25 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/31 18:18:11 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    struct t_list *newlist;
    newlist = (t_list *)malloc(sizeof(struct t_list));
    if(!newlist)
        return(NULL);
    
    newlist->content = content;
    newlist->next = NULL;
    return(newlist);
}