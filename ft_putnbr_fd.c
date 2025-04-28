#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
        write(fd, '-', 1);
    if (n > 9) {
        ft_putnbr_fd((n / 10), fd);
        n = n % 10;
    }
    write(fd, n + '0', 1);
}