/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:53:13 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/18 11:58:57 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*temp;
	unsigned char		*temp2;

	i = 0;
	temp = (const unsigned char *)src;
	temp2 = (unsigned char *)dest;
	while (i < n)
	{
		temp2[i] = temp[i];
		i++;
	}
	return (dest);
}
