/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:40:33 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:47:52 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	while (n != 0)
	{
		if (s[n] == c)
		{
			return ((char *)&s[n]);
		}
		n--;
	}
	return (NULL);
}
