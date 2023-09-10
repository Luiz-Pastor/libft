#include "tests.h"

static void returns(char *src, unsigned int start, size_t length, char *expected);

void    test_substr()
{
    char s1[] = "Hello World!";
    char s2[] = "How r u?";

    returns(s1, 0, 0, "");
    returns(s1, 0, 1, "H");
    returns(s1, 0, 5, "Hello");
    returns(s1, 0, 10, "Hello Worl");
    returns(s1, 0, 100, "Hello World!");

    returns(s2, 0, 0, "");
    returns(s2, 3, 1, " ");
    returns(s2, 2, 5, "w r u");
    returns(s2, 0, 10, "How r u?");
    returns(s2, 7, 100, "?");

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *src, unsigned int start, size_t length, char *expected)
{
    char *res;

    res = ft_substr(src, start, length);
    // printf("\t> %s\n\t> %s\n", res, expected);
    PRINT_TEST_RESULT(strcmp(res, expected) == 0);

    free(res);
}