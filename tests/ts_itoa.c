#include "tests.h"

static void returns(int number, char *expected);

void    test_itoa()
{

    returns(12345, "12345");
    returns(-12345, "-12345");
    returns(0, "0");
    returns(-0, "0");

    returns(-2147483648, "-2147483648");
    returns(2147483647, "2147483647");

    PRINT_PASSED_PERCENTAGE;
}

static void returns(int number, char *expected)
{
    char    *res;

    res = ft_itoa(number);
    // printf("\t> %s\n\t> %s\n", res, expected);
    PRINT_TEST_RESULT(strcmp(res, expected) == 0);

    free(res);
}