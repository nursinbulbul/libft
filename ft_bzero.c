/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:46:57 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 17:15:55 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;

    unsigned char *temp;
    temp = (unsigned char *)s;

    while(i < n)
    {
        temp[i] = 0;
        i++;
    }
}
/*int main()
{
    char arr[] = "hello";
    ft_bzero(arr, 3);
    printf("%s\n" ,arr);
    char arr2[] = "hello";
    ft_bzero(arr2, 3);
    printf("%s" ,arr2);
}*/