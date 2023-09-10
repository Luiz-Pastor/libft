#include "tests.h"

static void returns(char *s1, char *s2, char *expected);

void    test_strjoin()
{
    char s1[] = "Hello World. ";
    char s2[] = "The cake is a lie";
    char s3[] = "How are you? R u okay?";

    
    returns(s1, s1, "Hello World. Hello World. ");
    returns(s1, s2, "Hello World. The cake is a lie");
    returns(s1, s3, "Hello World. How are you? R u okay?");

    returns(s2, s1, "The cake is a lieHello World. ");
    returns(s2, s2, "The cake is a lieThe cake is a lie");
    returns(s2, s3, "The cake is a lieHow are you? R u okay?");

    returns(s3, s1, "How are you? R u okay?Hello World. ");
    returns(s3, s2, "How are you? R u okay?The cake is a lie");
    returns(s3, s3, "How are you? R u okay?How are you? R u okay?");

    returns(s1, NULL, "Hello World. ");
    returns(NULL, s3, "How are you? R u okay?");

    returns(NULL, NULL, NULL);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *s1, char *s2, char *expected)
{
    char *res;

    res = ft_strjoin(s1, s2);
    // printf("\t> %s\n\t> %s\n", res, expected);
    PRINT_TEST_RESULT((!res && !expected) || (strcmp(res, expected) == 0));

    if (res)
        free(res);
}