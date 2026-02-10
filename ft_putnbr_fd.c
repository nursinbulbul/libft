/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:57:01 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 11:57:02 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }

    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    n = n % 10;
    c = n + '0';
    write(fd, &c, 1);
}
#include <fcntl.h>
int main()
{
    int fd;

    fd = open("test4.txt" , O_WRONLY | O_CREAT | O_TRUNC, 0777);

    int n;
    n = 2147483648;

    ft_putnbr_fd(n, fd);
    close(fd);
}