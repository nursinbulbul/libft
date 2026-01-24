/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:17:12 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/24 15:15:18 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
    
    while (n != 0)
    {
        s = c;
        n--;
    }
    return (s);
}

int main()
{
        
}