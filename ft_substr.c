/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:00:29 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/29 20:00:13 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (len > (ft_strlen(s) - start))
    len = ft_strlen(s) - start;
    
    char *substring;
    substring = (char *)malloc(sizeof(len + 1));
    
    if ((!substring) || (!s) || (start > ft_strlen(s)))
    return NULL;
    
    unsigned int i;
    i = 0;
    
    while (i < len)
    {
        substring[i] = s[start];
        i++;
        start++;
    }
    substring[i] = '\0';
    
    return(substring);
    
}

int main()
{
    char const arr[] = "nursinbulbul";
    
    printf("%s" ,ft_substr(arr, 3, 6));
}