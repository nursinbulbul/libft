/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:52:44 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 17:17:41 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isascii(int c)
{
    if ((c >= 0 && c <= 127))
    {
        return (1);
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_isascii(6));
        printf("%d", isascii(6));

}