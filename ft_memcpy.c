/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:53:13 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/25 13:12:28 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    
    const unsigned char *temp;
    temp = src;
    unsigned char *temp2;
    temp2 = dest;
    
    while (i < n)
    {
        temp2[i] = temp[i];
        i++;
        
    }
    
    return((void *)dest);
}

int main()
{
    char dst[] = "bulbul";
    char sorc[] = "nursin";
    ft_memcpy(dst, sorc, 3);
    printf("%s" , dst);
}