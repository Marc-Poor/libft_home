char *ft_strrchr(const char *s, int c)
{
    int count;
    int last;

    count = 0;
    while (s[count] != '\0') {
        if (s[count] == c)
            last = count;
        count++;
    }
    return (s + last);
}