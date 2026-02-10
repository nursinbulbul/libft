/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:57:11 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 11:57:12 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    if(!s)
    return;

    int n;
    n = 0;

    while (s[n] != '\0')
    {
        write(fd, &s[n], 1);
        n++;
    }
    
}
#include <fcntl.h>
int main()
{
    int fd;

    fd = open("test2.txt" , O_WRONLY | O_CREAT | O_TRUNC, 0777);

    char arr[] = "hello from nursin";

    ft_putstr_fd(arr, fd);
    close(fd);
}