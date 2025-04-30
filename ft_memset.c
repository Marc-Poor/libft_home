#include <stddef.h>

void *ft_memset(void *pointer, int value, size_t count)
{
    int nbr;
    char *point;

    nbr = 0;
    point = pointer;
    while (nbr < (int)count)
    {
        point[nbr] = (unsigned char)value;
        nbr++;
    }
    return (pointer);
}

