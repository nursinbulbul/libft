/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:20:31 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 17:19:42 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

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

    ft_bzero((void *)p ,(size * nmemb));
    return ((void *)p);
}

/*while (i < size * nmemb)
    {
        p[i] = 0;
        i++;
    }bzero yerine burdaki gibi döngü ile de yapılabilir*/
#include <stdio.h>
int main()
{
    char *ptr = ft_calloc(3, 1);
    ptr = "123";
    printf("%s", ptr);
}