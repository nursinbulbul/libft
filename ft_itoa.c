/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:09:31 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/12 17:36:16 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sign(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	slong(long n)
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
	long	nb;
	int		i;
	char	*num;

	nb = n;
	i = slong(nb);
	num = (char *)malloc(i + 1);
	if (!num)
		return (NULL);
	num[i] = '\0';
	if (nb == 0)
		num[0] = '0';
	if (nb < 0)
	{
		num[0] = '-';
		nb *= -1;
	}
	while (i > sign((long)n))
	{
		num[i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (num);
}
