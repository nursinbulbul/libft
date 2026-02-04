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