/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:10:50 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/29 19:59:18 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t n;
    i = 0;
    n = 0;
    if (!s1 || !set)
    return(NULL);
    
    while (s1[i] != '\0')
    {
        if(!ft_strchr(set, s1[i]))
        break;
        i++;
    }
    while (s1[n] != s1[i])
    {
        if (!ft_strchr(set, s1[n]))
        break;
        n++;
    }
    
    char *trimmed;
    trimmed = (char *)malloc(sizeof((n - i) + 1));
    
    
    
}