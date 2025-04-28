#include <stddef.h>

void *ft_memset(void *pointer, int value, size_t count)
{
    int nbr;
    char *point = pointer;

    nbr = 0;
    while (nbr < count)
    {
        point[nbr] = (unsigned char)value;
        nbr++;
    }
    return (pointer);
}

