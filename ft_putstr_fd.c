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