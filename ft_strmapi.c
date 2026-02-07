/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:57:59 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 11:58:00 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
   unsigned int n;
   size_t i;
   
   n = 0;

   if (!s || !f)
   return (NULL);
   
   i = ft_strlen(s);

   char *newstr;
   newstr = malloc(i + 1);

   if(!newstr)
   return(NULL);

   while (n < i)
   {
    newstr[n] = f(n, s[n]);
    n++;
   }
   newstr[n] = '\0';

   return(newstr);
}