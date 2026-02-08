/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:55:18 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 15:43:01 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    unsigned const char *temp;
    temp = s;
    
    while (n > i)
    {
        if (temp[i] == c)
        {
            return((void *)&temp[i]);
        }
        i++;
    }
    return(NULL);
}
int main()
{
    char arr[] = "nursin";
    printf("%s" , ft_memchr(arr, 'i', 6));
    char arr2[] = "nursin";
    printf("%s\n" , memchr(arr2, 'i', 6));
}