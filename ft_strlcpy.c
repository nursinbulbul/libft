/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:56:09 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/23 18:40:06 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
 size_t i;
 size_t n;
 n = 0;
 i = 0;
 while(src[n] != '\0')
    n++;
 
 while(src[i] != '\0' && i < size) 
 {
    dst[i] = src[i];
    i++;
 }
 
 dst[i] = '\0';
 
 return (n);
}

int main()
{
    char dest[] = "bl";
    char sorc[] = "nursin";
    
    printf("%zu", ft_strlcpy(dest, sorc, 4));
    printf("%s" , dest);
    
}