#include "tests.h"

static void    change(char *s, void (*f)(unsigned int, char*), char *expected);
static void    func1(unsigned int number, char *ch);
static void    func2(unsigned int number, char *ch);

void    test_striteri()
{
    char s1[] = "Hello World!";

    change(s1, func1, "Mmmmm_Mmmmm_");
    change(s1, func2, "100002100002");

    change(s1, NULL, s1);
    change(NULL, func1, NULL);
    change(NULL, NULL, NULL);

    PRINT_PASSED_PERCENTAGE;
}

static void change(char *s, void (*function)(unsigned int, char*), char *expected)
{
    char *res;

    if (s)
        res = strdup(s);
    else
        res = NULL;
    
    ft_striteri(res, function);
    // printf("\t> %s\n\t> %s\n", res, expected);
    PRINT_TEST_RESULT((!res && !expected) || (strcmp(res, expected) == 0));

    free(res);
}

static void    func1(unsigned int number, char *ch)
{
    if (number == 0)
        number = 1;
    if (*ch >= 'a' && *ch <= 'z')
        *ch = 'm';
    else if (*ch >= 'A' && *ch <= 'Z')
        *ch = 'M';
    else
        *ch = '_';
}

static void    func2(unsigned int number, char *ch)
{
    if (number == 0)
        number = 1;
    if (*ch >= 'a' && *ch <= 'z')
        *ch = '0';
    else if (*ch >= 'A' && *ch <= 'Z')
        *ch = '1';
    else
        *ch = '2';
}