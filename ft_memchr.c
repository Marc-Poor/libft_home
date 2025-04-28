#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int nbr;
    char *point = s;

    nbr = 0;
    while (nbr < n)
    {
        if (point[nbr] == c)
            return (point + nbr);
        nbr++;
    }
    return (NULL);
}