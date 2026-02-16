/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:40:33 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/16 14:36:36 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&s[n]);
	}
	n--;
	while (n >= 0)
	{
		if (s[n] == (unsigned char)c)
		{
			return ((char *)&s[n]);
		}
		n--;
	}
	return (NULL);
}
