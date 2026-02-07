/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:15:28 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 17:19:23 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isprint(int c)
{
    if ((c >= 32 && c <= 126))
    {
        return (1);
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_isprint('n'));
        printf("%d", isprint('n'));

}