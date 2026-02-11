/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 11:56:40 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 16:22:47 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_tolower(int c)
{
    if((c >= 65 && c <= 90))
    {
        c += 32;
        return(c);
    }
    return (c);
}

// int main()
// {
//     printf("%c" , ft_tolower('S'));
// }