/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:37:07 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/28 19:48:30 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(const char *s)
{
    size_t len;
    size_t i;
    i = 0;
    len = 0;
    if (s == NULL)
    return(NULL);

    while (s[len] != '\0')
    len++;
    
    char *p = malloc(len + 1);
    if (p == NULL)
    return(NULL);

    while (i < len)
    {
        p[i] = s[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}