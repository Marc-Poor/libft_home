#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    write(fd, s, i);
    write(fd, "\n", 1);
}