/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:57:44 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 11:57:45 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void lower(unsigned int n, char *c)
{
    if ((n % 2 != 00) && *c >= 'A' && *c <= 'Z')
    {
        *c += 32;
    }
    return;
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int n;
    n = 0;
    if (!s || !f)
    return;
    
    while (s[n] !='\0')
    {
        
        f(n, &s[n]);
        n++;
    }
    
}
#include <stdio.h>
int main()
{
    char s[] = "NURSIN";
    ft_striteri(s, lower);
    printf("%s\n", s);
}