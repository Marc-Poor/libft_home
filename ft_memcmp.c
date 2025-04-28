#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int count;
    char *str1 = s1;
    char *str2 = s2;

    count = 0;
    while (str1[count] == str2[count] && count < n)
        count++;
    return (str1[count] - str2[count]);
}