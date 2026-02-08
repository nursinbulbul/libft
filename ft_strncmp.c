/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:58:51 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 15:25:23 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    
    while((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if(s1[i] != s2[i])
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(0);
}
int main()
{
    char str1[] = "nur";
    char str2[] = "nursin";
    printf("%d\n" , ft_strncmp(str1, str2, 3));
    char str12[] = "nur";
    char str22[] = "nursin";
    printf("%d" , strncmp(str12, str22, 3));
}