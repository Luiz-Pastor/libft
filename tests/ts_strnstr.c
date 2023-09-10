#include "tests.h"

static char    *app_strnstr(const char *haystack, const char *needle, size_t len);
static void returns(char *big, char *little, size_t length);

void    test_strnstr()
{
    char a1[] = "Foo Bar Baz";
    char a2[] = "Bar";

    returns(a1, a2, 3);
    returns(a1, a2, 7);
    returns(a1, a2, 11);
    returns(a1, "", 11);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *big, char *little, size_t length)
{
    char *res1;
    char *res2;

    res1 = app_strnstr(big, little, length);
    res2 = ft_strnstr(big, little, length);
    // printf("\t> %s\n\t> %s\n", res1, res2);
    PRINT_TEST_RESULT((!res1 && !res2) || (strcmp(res1, res2) == 0));
}

static char    *app_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    j = 0;
    while (j < len && haystack[j])
    {
        i = 0;
        while (j < len && needle[i] && haystack[j] && needle[i] == haystack[j])
        {
            ++i;
            ++j;
        }
        if (needle[i] == '\0')
            return ((char *)&haystack[j - i]);
        j = j - i + 1;
    }
    return (0);
}