/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:57:59 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:57:21 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	size_t			i;
	char			*newstr;

	n = 0;
	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	newstr = malloc(i + 1);
	if (!newstr)
		return (NULL);
	while (n < i)
	{
		newstr[n] = f(n, s[n]);
		n++;
	}
	newstr[n] = '\0';
	return (newstr);
}
