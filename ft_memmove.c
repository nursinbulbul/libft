/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:07:26 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 14:05:59 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *dst;
    const unsigned char *sorc;
    dst = dest;
    sorc = src;

    if (dest < src)
    {
        while (i < n)
        {
            dst[i] = sorc[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            dst[n - 1] = sorc[n -1];
            n--;
        }
    }
    return(dest);   
}

int main()
{
    int arr[] = {1,2,3,4};
    int arr2[] = {5,287,7,8};
    ft_memmove(arr, arr2, 5);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    int arr3[] = {1,2,3,4};
    int arr4[] = {5,287,7,8};
    memmove(arr3, arr4, 5);
    printf("%d\n",arr3[0]);
    printf("%d\n",arr3[1]);
    printf("%d\n",arr3[2]);
    printf("%d\n",arr3[3]);
}