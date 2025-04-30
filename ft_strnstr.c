#include <stddef.h>
#include <stdio.h>

static int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t count;

    count = 0;
    while (s1[count] == s2[count] && count < n - 1)
        count++;
    return (s1[count] - s2[count]);
}

char *ft_strnstr(char *haystack, const char *needle, size_t n)
{
    int count;
    int size;

    count = 0;
    size = 0;
    while(needle[size] != '\0')
        size++;
    while (haystack[count] != '\0' && count < (int)n) {
        if (ft_strncmp(haystack + count, needle, size) == 0)
            return ((char *)haystack + count);
        count++;
    }
    return (NULL);
}