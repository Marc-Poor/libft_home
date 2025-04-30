#include "my.h"

#define TEST_INT_FUNC(func, x) do { \
    int real = func(x); \
    int mine = ft_##func(x); \
    printf(#func "(%c): %s\n", x, (real == mine) ? "OK" : "KO"); \
} while (0)

//    printf("real %i, fake %i ", real, mine); \


#define TEST_STR_FUNC(func, s, c) do { \
    char *real = func(s, c); \
    char *mine = ft_##func(s, c); \
    printf(#func "(%s, %c): %s\n", s, c, (real == mine) ? "OK" : "KO"); \
} while (0)

int main(void)
{
    for (int c = 0; c <= 127; c++) {
    //    TEST_INT_FUNC(isalpha, c);
    //    TEST_INT_FUNC(isdigit, c);
    //    TEST_INT_FUNC(isalnum, c);
    //    TEST_INT_FUNC(isascii, c);
    //    TEST_INT_FUNC(isprint, c);
        TEST_INT_FUNC(toupper, c);
        TEST_INT_FUNC(tolower, c);
    }

    const char *test_strs[] = {"", "hello", "1234567890", "libft", NULL};
    for (int i = 0; test_strs[i]; i++) {
        size_t real = strlen(test_strs[i]);
        size_t mine = ft_strlen(test_strs[i]);
        printf("strlen(\"%s\"): %s\n", test_strs[i], (real == mine) ? "OK" : "KO");
    }

    char buff1[10];
    char buff2[10];
    ft_memset(buff1, 'A', 5);
    memset(buff2, 'A', 5);
    printf("memset: %s\n", (memcmp(buff1, buff2, 10) == 0) ? "OK" : "KO");

    char buff3[10];
    char buff4[10];
    memset(buff3, 'A', 10);
    memset(buff4, 'A', 10);
    ft_bzero(buff3, 5);
    bzero(buff4, 5);
    printf("bzero: %s\n", (memcmp(buff3, buff4, 10) == 0) ? "OK" : "KO");

    char src[] = "123456789";
    char dst1[20];
    char dst2[20];
    ft_memcpy(dst1, src, 10);
    memcpy(dst2, src, 10);
    printf("memcpy: %s\n", (memcmp(dst1, dst2, 10) == 0) ? "OK" : "KO");

    char overlap1[20] = "hello world";
    char overlap2[20] = "hello world";
    ft_memmove(overlap1 + 2, overlap1, 5);
    memmove(overlap2 + 2, overlap2, 5);
    printf("memmove: %s\n", (memcmp(overlap1, overlap2, 20) == 0) ? "OK" : "KO");
/*
    char strlcpy_dst1[20];
    char strlcpy_dst2[20];
    size_t l1 = ft_strlcpy(strlcpy_dst1, "hello", 20);
    size_t l2 = strlcpy(strlcpy_dst2, "hello", 20);
    printf("strlcpy: %s\n", (l1 == l2 && strcmp(strlcpy_dst1, strlcpy_dst2) == 0) ? "OK" : "KO");

    char strlcat_dst1[20] = "Hi ";
    char strlcat_dst2[20] = "Hi ";
    size_t cat1 = ft_strlcat(strlcat_dst1, "there", 20);
    size_t cat2 = strlcat(strlcat_dst2, "there", 20);
    printf("strlcat: %s\n", (cat1 == cat2 && strcmp(strlcat_dst1, strlcat_dst2) == 0) ? "OK" : "KO");
*/
    TEST_STR_FUNC(strchr, "hello", 'e');
    TEST_STR_FUNC(strrchr, "hello", 'l');

    int cmp1 = ft_strncmp("abc", "abd", 3);
    int cmp2 = strncmp("abc", "abd", 3);
    printf("strncmp: %s\n", ((cmp1 == 0 && cmp2 == 0) || (cmp1 * cmp2 > 0)) ? "OK" : "KO");

    char *memchr1 = memchr("abcdef", 'd', 6);
    char *memchr2 = ft_memchr("abcdef", 'd', 6);
    printf("memchr: %s\n", (memchr1 == memchr2) ? "OK" : "KO");

    int mcmp1 = memcmp("abc", "abc", 3);
    int mcmp2 = ft_memcmp("abc", "abc", 3);
    printf("memcmp: %s\n", (mcmp1 == mcmp2) ? "OK" : "KO");

    char *nstr1 = strstr("foo bar baz", "bar");
    char *nstr2 = ft_strnstr("foo bar baz", "bar", 11);
    printf("nstr 1 %s, nstr 2 %s\n", nstr1, nstr2);
    printf("strnstr: %s\n", (nstr1 == nstr2) ? "OK" : "KO");

    int atoi1 = atoi("  -42");
    int atoi2 = ft_atoi("  -42");
    //printf("atoi: %s\n", (atoi1 == atoi2) ? "OK" : "KO");
    int fd = open("test", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putchar_fd('I', fd);
    ft_putstr_fd(" can Write in this pag#e ", fd);
    ft_putnbr_fd( -2147483648, fd);
    ft_putendl_fd( " it's great !", fd);

    return 0;
}