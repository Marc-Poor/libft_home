#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    int nbr;
    char *point = s;

    nbr = 0;
    while (nbr < (int)n)
    {
        point[nbr] = 0;
        nbr++;
    }
}