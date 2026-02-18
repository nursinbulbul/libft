/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:55:18 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/18 11:58:15 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*temp;

	i = 0;
	temp = (unsigned const char *)s;
	while (n > i)
	{
		if (temp[i] == (unsigned char)c)
		{
			return ((void *)&temp[i]);
		}
		i++;
	}
	return (NULL);
}
