#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int count;
    const char *str1;
    const char *str2;

    str1 = s1;
    str2 = s2;
    count = 0;
    while (str1[count] == str2[count] && count < (int)n)
        count++;
    return (str1[count] - str2[count]);
}