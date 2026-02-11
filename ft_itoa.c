/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:09:31 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 19:04:26 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	slong(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (sign(n))
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*num;

	j = 0;
	i = slong(n);
	num = (char *)malloc(i + 1);
	if (!num)
		return (NULL);
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[j] = '-';
		j++;
		n *= -1;
	}
	num[i] = '\0';
	while (j < i)
	{
		num[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (num);
}
