/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:21:56 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 15:55:11 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
    int arr[] = {1,2,3,4};
    int arr2[] = {1,2,3,5};
    
    printf("%d\n" , ft_memcmp(arr, arr2, 6));

    int arr3[] = {1,2,3,4};
    int arr4[] = {1,2,3,5};
    
    printf("%d" , memcmp(arr3, arr4, 6));
}