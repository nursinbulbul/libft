/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:27:47 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/12 17:36:32 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	size_t	len;
	char	*newstring;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	n = ft_strlen(s2);
	len = 0;
	newstring = (char *)malloc(i + n + 1);
	if (!newstring)
		return (NULL);
	while (s1[len] != '\0')
	{
		newstring[len] = s1[len];
		len++;
	}
	len = 0;
	while (s2[len] != '\0')
		newstring[i++] = s2[len++];
	newstring[i] = '\0';
	return (newstring);
}
