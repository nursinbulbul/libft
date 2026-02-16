/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:21:56 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/16 14:34:08 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp2;
	size_t			i;

	if (n == 0)
		return (0);
	temp = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp[i] != temp2[i])
		{
			return (temp[i] - temp2[i]);
		}
		else if (temp[i] == temp2[i])
		{
			i++;
		}
	}
	return (0);
}
