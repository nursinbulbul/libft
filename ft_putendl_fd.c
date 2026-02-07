/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:56:53 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 11:56:54 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int n;
    n = 0;

    if(!s)
    return;

    while (s[n] != '\0')
    {
        write(fd, &s[n], 1);
        n++;
    }
    write(fd, "\n", 1);

}