/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:09:31 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 14:36:34 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int sign(int n)
{
    if (n < 0)
        return(1);
    return(0);  
}
int slong(int n)
{
    int i;
    i = 0;
    if (n == 0)
        return (1);
    if (sign(n))
    {
        n *= -1; 
        i++;
    }
    while (n > 0)
    {
        n = n / 10;
        i++;    
    }
    return(i);
}

char *ft_itoa(int n)
{
    int i;
    int j;
    j = 0;
    i = slong(n);
    char *num;
    num = (char *)malloc(i + 1);
    if(!num)
    {
        return(NULL);
    }
    if (n == 0)
    {
     num[0] = '0';   
    }
    if (n < 0)
    {
        num[j] = '-';
        j++;
        n *= -1; 
    }
    num[i] = '\0';
    while (j < i)
    {
        num[i - 1] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    
    return(num);
}

#include <stdio.h>
int main()
{
    int a = -7553567;
    printf("%s" , ft_itoa(a));
}