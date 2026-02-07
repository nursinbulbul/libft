/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:47:00 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 17:13:10 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isalnum(int c)
{
    if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) 
            || ((c >= 48) && (c <= 57))){
                return (1);
    }
    return (0);
}

int main(){
    printf("%d\n", ft_isalnum(' '));
        printf("%d", isalnum(' '));

}