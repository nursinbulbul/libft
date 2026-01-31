/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:59:51 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/31 17:06:15 by nbulbul          ###   ########.fr       */
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