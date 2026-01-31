/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:20:31 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/31 13:19:23 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i ; 
    i = 0;
    
    if (nmemb == 0 || size == 0)
    return (malloc(1));
    
    if (nmemb > SIZE_MAX / size)
    return (NULL); 
    
    unsigned char *p;
    p = (unsigned char *)malloc(sizeof(nmemb * size));
    
    if (p == NULL)
    return(NULL);

    while (i < size)
    {
        p[i] = 0;
        i++;
    }
    return ((void *)p);
}
