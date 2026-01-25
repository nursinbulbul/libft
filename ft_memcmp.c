/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:21:56 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/25 13:37:50 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0)
    return(0);
    
    unsigned char *temp;
    unsigned char *temp2;
    
    temp = (unsigned char *)s1;
    temp2 = (unsigned char *)s2;
    
    size_t i;
    i = 0;
    while(i < n)
    {
        if (temp[i] != temp2[i])
        {
            return(temp[i] - temp2[i]);
        }
        else if (temp[i] == temp2[i])
        {
            i++;
        }
    }
    return(0);
}

int main()
{
    char arr[] = {'1', '2', '3', '5'};
    char arr2[] = {'1', '2', '3', '4'};
    
    printf("%d" , ft_memcmp(arr, arr2, 4));
}