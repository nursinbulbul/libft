/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:10:50 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/31 13:08:01 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t n;
    size_t j;
    i = 0;
    n = ft_strlen(s1);
    j = 0;
    if (!s1 || !set)
    return(NULL);
    
    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;
    while (s1[n] != s1[i] && !ft_strchr(set, s1[n]))
        n--;
    
    char *trimmed;
    trimmed = (char *)malloc(sizeof((n - i) + 1));
    
    if (!trimmed)
    return(NULL);
    
    while (i != n)
    {
        trimmed[j] = s1[i];
        j++;
        i++;
    }
    trimmed[j] = '\0';
    return(trimmed);
}

#include <stdio.h>
int main()
{
    char const arr[] = "nursinbulbul";
    char const arr2[] = "nbu";
    printf("%s" , ft_strtrim(arr, arr2));
}