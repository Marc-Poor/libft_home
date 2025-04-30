#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int nbr;
    const char *point;

    nbr = 0;
    point = s;
    while (nbr < n)
    {
        if (point[nbr] == c)
            return (point + nbr);
        nbr++;
    }
    return (NULL);
}