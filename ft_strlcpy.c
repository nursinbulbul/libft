/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:56:09 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 14:41:03 by nbulbul          ###   ########.fr       */
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
 if (size == 0)
 {
   return (n);
 }   
 while(src[i] != '\0' && i < size - 1) 
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
    
    printf("%zu\n", ft_strlcpy(dest, sorc, 4));
    printf("%s\n" , dest);
    
}