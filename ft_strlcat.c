/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:41:54 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:45:51 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (dst[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && i < size)
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[n + i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (n + i);
}
