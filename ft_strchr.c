/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:10:49 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/24 12:49:02 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int n;
    n = 0;
    
    while(s[n] != '\0')
    {
        if (s[n] == c)
        {
            return((char *)&s[n]);
        }   
        n++;
    }
    return(NULL);
}
int main()
{
    char str[] = "nursin";
    printf("%p" , ft_strchr(str, 'n'));
    printf("\n%p" , &str[0]);
}