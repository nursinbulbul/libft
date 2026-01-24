/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:56:26 by nbulbul           #+#    #+#             */
/*   Updated: 2026/01/24 11:51:16 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_toupper(int c)
{
    if((c >= 97 && c <= 122))
    {
        c -= 32;
        return(c);
    }
    return (c);
}

int main()
{
    printf("%c" , ft_toupper('A'));
}