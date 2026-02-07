/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:51:17 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 15:22:02 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int word_count(char const *s, char c)
{
    int wordc;
    int i;

    wordc = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && s[i + 1] == c || s[i + 1] == '\0')
        {
            wordc++;
        }
        i++;
    }
    return(wordc);
}
static int letter_count(char const *s, char c)
{
    int letterc;

    letterc = 0;

    while (s[letterc] && s[letterc] != c)
    {
        letterc++;
    }
    return(letterc);
}
static void use_free(char **s)
{
    int i;

    i = 0;
    if (!s)
    {
        return;
    }
    while (s[i])
    {
        free(s[i++]);
    }
    free(s);
}

char **ft_split(char const *s, char c)
{
    char **newstr;
    int i;
    int j;

    i = 0;
    j = 0;
    
    if (!s)
    {
        return(NULL);
    }
    
    newstr = ft_calloc((word_count(s,c) +1), sizeof(char *));

    if (!newstr)
    {
        return(NULL);
    }
    
    while (s[i])
    {
        while (s[i] == c && s[i])
        {
            i++;
        }
        if (s[i])
        {
            newstr[j] = ft_substr(s, i, letter_count(&s[i], c));
            if (!newstr[j])
            {
                return(use_free(newstr),NULL);
            }
            i += letter_count(&s[i], c);
            j++;
        }
    }
    return(newstr);
}
