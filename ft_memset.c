/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:17:12 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 17:30:59 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *temp;
    temp = (unsigned char *)s;
    
    while (i < n)
    {
        temp[i] = c;
        i++;
    }
    return (s);
}

int main()
{
    char arr[] = "hello";
    ft_memset(arr, '2', 6);
    printf("%s\n" ,arr);
    char arr2[] = "hello";
    memset(arr2, '2', 6);
    printf("%s" ,arr2);
}