/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:07:26 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:45:08 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sorc;

	i = 0;
	dst = dest;
	sorc = src;
	if (dest < src)
	{
		while (i < n)
		{
			dst[i] = sorc[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dst[n - 1] = sorc[n - 1];
			n--;
		}
	}
	return (dest);
}
