/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:27:47 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/29 20:00:35 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    i = ft_strlen(s1);
    size_t n;
    n = ft_strlen(s2);
    size_t len;
    len = 0;
        
    char *newstring;
    newstring = (char *)malloc(sizeof(i + n));
    
    while (s1[len] != '\0')
    {
        newstring[len] = s1[len];
        len++;
    }
    len = 0;
    while (s2[len] != '\0')
    {
        newstring[i++] = s2[len++];
    }
    newstring[i] = '\0';
    return(newstring);
}

int main()
{
    char const arr[] = "nursin";
    char const arr2[] = "bulbul";

    printf("%s" , ft_strjoin(arr, arr2));
}