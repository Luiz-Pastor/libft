#include "tests.h"

static void returns(char *s1, char *set, char *expected);

void    test_strtrim()
{
    char s1[] = "Hello World!";

    returns(s1, " _-.\\/*", "HelloWorld!");
    returns(s1, "WO", "Hello orld!");
    returns(s1, "Hello World!", "");

    returns(NULL, "Nothing", NULL);
    returns("The same", NULL, "The same");


    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *s1, char *set, char *expected)
{
    char *res;

    res = ft_strtrim(s1, set);
    // printf("\t> %s\n\t> %s\n", res, expected);
    PRINT_TEST_RESULT((!res && !expected) || (strcmp(res, expected) == 0));

    free(res);
}