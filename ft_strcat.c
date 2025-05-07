#include <stddef.h>

int strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int dst_len;

    i = 0;
    dst_len = 0;
    while (dst[dst_len] != '\0')
        dst_len++;
    while (i < size - 1) {
        dst[dst_len + i] = src[i];
        i++;
    }
    if (size > 0)
        dst[dst_len + i] = '\0';
    return (dst_len + i);
}