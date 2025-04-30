#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int count;
    char *str_dest;
    const char *str_src;

    str_dest = (char *)dest;
    str_src = (const char *)src;
    count = 0;
    while (count < (int)n)
    {
        str_dest[count] = str_src[count];
        count++;
    }
    return (dest);
}