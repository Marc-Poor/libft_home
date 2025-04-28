int ft_tolower(int character)
{
    if (character >= 'A' && character <= 'Z')
        return (character + ('a' - 'A'));
    return (character);
}