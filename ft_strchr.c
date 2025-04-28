char *ft_strchr(const char *s, int c)
{
    int count;

    count = 0;
    while (s[count] != c && s[count] != '\0')
        count++;
    return (s + count);
}
