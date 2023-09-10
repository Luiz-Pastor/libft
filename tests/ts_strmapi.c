#include "tests.h"

static void    returns(char *s, char (*function)(unsigned int, char), char *expected);
static char    func1 (unsigned int number, char ch);
static char    func2(unsigned int number, char ch);

void    test_strmapi()
{
    char s1[] = "Hello World!";

    returns(s1, func1, "Mmmmm_Mmmmm_");
    returns(s1, func2, "100002100002");

    returns(s1, NULL, NULL);
    returns(NULL, func1, NULL);
    returns(NULL, NULL, NULL);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *s, char (*function)(unsigned int, char), char *expected)
{
    char    *res;

    res = ft_strmapi(s, function);
    // printf("\t> %s\n\t> %s\n", res, expected);
    PRINT_TEST_RESULT((!res && !expected) || (strcmp(res, expected) == 0));

    free(res);
}

static char    func1(unsigned int number, char ch)
{
    if (number == 0)
        number = 1;
    if (ch >= 'a' && ch <= 'z')
        return 'm';
    if (ch >= 'A' && ch <= 'Z')
        return 'M';
    return '_';
}

static char    func2(unsigned int number, char ch)
{
    if (number == 0)
        number = 1;
    if (ch >= 'a' && ch <= 'z')
        return '0';
    if (ch >= 'A' && ch <= 'Z')
        return '1';
    return '2';
}