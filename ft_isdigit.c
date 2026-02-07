/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:01:29 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 17:11:27 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_isdigit(int c)
{
    if (((c >= 48) && (c <= 57)))
    {
        return (1);
    }
    return (0);
}
int main()
{
    printf("%d\n" , ft_isdigit('c'));
    printf("%d" , isdigit('c'));

}