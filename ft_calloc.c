/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:20:31 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:51:34 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = (unsigned char *)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero((void *)p, (size * nmemb));
	return ((void *)p);
}
