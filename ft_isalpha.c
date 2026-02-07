/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:34:10 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 17:05:13 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isalpha(int c)
{
    if(((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
    {
        return (1);
    }

    return (0);
}
int main(){
    printf("%d\n" , ft_isalpha('i'));
    printf("%d" , isalpha('i'));

}