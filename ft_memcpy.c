/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:53:13 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 14:08:12 by nbulbul          ###   ########.fr       */
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
    
    return(dest);
}

int main()
{
      int arr[] = {1,2,3,4};
    int arr2[] = {5,287,7,8};
    ft_memcpy(arr + 1, arr, 5);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    int arr3[] = {1,2,3,4};
    int arr4[] = {5,287,7,8};
    memcpy(arr3 + 1, arr3, 5);
    printf("%d\n",arr3[0]);
    printf("%d\n",arr3[1]);
    printf("%d\n",arr3[2]);
    printf("%d\n",arr3[3]);
}