static int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (c);
    return (0);
}

int ft_atoi(const char *nptr)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 1;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n')
        i++;
    if (nptr[i] == '-' || nptr[i] == '+') {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (nptr[i] != '\0' && ft_isdigit(nptr[i])) {
        nbr = nbr * 10 + (nptr[i] - '0');
        i++;
    }
    return (nbr * sign);
}