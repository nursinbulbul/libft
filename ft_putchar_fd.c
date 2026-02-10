/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbulbul <nbulbul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:56:41 by nbulbul           #+#    #+#             */
/*   Updated: 2026/02/07 11:56:42 by nbulbul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
#include <fcntl.h>
int main()
{
    int fd;
    fd = open("test1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);

    if (fd == -1)
    {
        return(1);
    }
    
    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);

    close(fd);
}