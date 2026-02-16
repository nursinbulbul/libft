/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:41:54 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/16 14:35:33 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;
	size_t	j;

	n = 0;
	i = 0;
	j = 0;
	while (dst[n] != '\0')
		n++;
	while (src[i] != '\0')
		i++;
	if (n >= size)
		return (i + size);
	while (src[j] != '\0' && (j + n + 1) < size)
	{
		dst[n + j] = src[j];
		j++;
	}
	if (n + j < size)
		dst[n + j] = '\0';
	return (n + i);
}
