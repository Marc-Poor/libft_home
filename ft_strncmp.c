#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t count;

    count = 0;
    while (s1[count] == s2[count] && count < n - 1)
        count++;
    return (s1[count] - s2[count]);
}