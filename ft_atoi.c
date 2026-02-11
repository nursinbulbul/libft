/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:28:56 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/11 18:49:40 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;
	int	result;

	n = 0;
	sign = 1;
	result = 0;
	while ((nptr[n] >= 9 && nptr[n] <= 13) || nptr[n] == ' ')
	{
		n++;
	}
	if (nptr[n] == '+' || nptr[n] == '-')
	{
		if (nptr[n] == '-')
		{
			sign *= -1;
		}
		n++;
	}
	while (nptr[n] >= '0' && nptr[n] <= '9')
	{
		result = (result * 10) + (nptr[n] - '0');
		n++;
	}
	return (sign * result);
}
