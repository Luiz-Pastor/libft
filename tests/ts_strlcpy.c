#include "tests.h"

static size_t  app_strlcpy(char * dst, const char * src, size_t maxlen);
static void change(char *src, size_t length);
static void returns(char *src, size_t length);

void    test_strlcpy()
{
    char s1[] = "";
    char s2[] = "Hello there!";
    char s3[] = "This is a bit tiring";

    change(s1, -10);
    returns(s1, -10);
    change(s1, -5);
    returns(s1, -5);
    change(s1, 5);
    returns(s1, 5);
    change(s1, 10);
    returns(s1, 10);
    change(s1, 15);
    returns(s1, 15);
    change(s1, 20);
    returns(s1, 20);

    change(s2, -10);
    returns(s2, -10);
    change(s2, -5);
    returns(s2, -5);
    change(s2, 5);
    returns(s2, 5);
    change(s2, 10);
    returns(s2, 10);
    change(s2, 15);
    returns(s2, 15);
    change(s2, 20);
    returns(s2, 20);

    change(s3, -10);
    returns(s3, -10);
    change(s3, -5);
    returns(s3, -5);
    change(s3, 5);
    returns(s3, 5);
    change(s3, 10);
    returns(s3, 10);
    change(s3, 15);
    returns(s3, 15);
    change(s3, 20);
    returns(s3, 20);

    PRINT_PASSED_PERCENTAGE;
}

static void change(char *src, size_t length)
{
    char aux1[100];
    char aux2[100];

    app_strlcpy(aux1, src, length);
    ft_strlcpy(aux2, src, length);
    // printf("\t> %s\n\t> %s\n", aux1, aux2);
    PRINT_TEST_RESULT(strcmp(aux1, aux2) == 0);
}

static void returns(char *src, size_t length)
{
    char aux1[100];
    char aux2[100];

    size_t  res1;
    size_t  res2;

    res1 = app_strlcpy(aux1, src, length);
    res2 = ft_strlcpy(aux2, src, length);
    // printf("\t> %ld\n\t> %ld\n", res1, res2);
    PRINT_TEST_RESULT(res1 == res2);
}

static size_t  app_strlcpy(char * dst, const char * src, size_t maxlen) {
    const size_t srclen = strlen(src);
    if (srclen + 1 < maxlen) {
        memcpy(dst, src, srclen + 1);
    } else if (maxlen != 0) {
        memcpy(dst, src, maxlen - 1);
        dst[maxlen-1] = '\0';
    }
    return srclen;
}