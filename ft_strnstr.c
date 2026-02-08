/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:07:10 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/08 16:02:03 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t n;
    size_t i;
    i = 0;
    if(little[i] == '\0')
    {
        return((char *)big);
    }
    else
    {
        while (big[i] != '\0' && i < len)
        {
            n = 0;
            while (big[n + i] == little[n] && little[n] != '\0' && n + i < len)
            {
                n++;
            }
            if (little[n] == '\0')
            {
                return((char *)&big[i]);
            }
            i++;
        }
        
    }
    return(NULL);
}
int main()
{
    char bigs[] = "bulbulnursinllll";
    char littles[] = "nursin";
    printf("%s" , ft_strnstr(bigs, littles,10));

}