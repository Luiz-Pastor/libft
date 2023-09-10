#include "tests.h"

static void change(char *dest, char *ori, size_t length);
static void returns(char *dest, char *ori, size_t length);

void    test_memmove()
{
    char a1[] = "oldstring";
    char a2[] = "newstring";

    char b[] = "aabbcc";

    char c1[] = "Geeks";
    char c2[] = "Quiz";

    change(a1, a2, 9);
    returns(a1, a2, 9);

    change(b + 2, b, 4);
    returns(b + 2, b, 4);

    change(c1, c2, sizeof(c2));
    returns(c1, c2, sizeof(c2));

    PRINT_PASSED_PERCENTAGE;
}

static void change(char *dest, char *ori, size_t length)
{
    char *cpy_ori = strdup(ori);
    char *cpy_dest = strdup(dest);

    memmove(dest, ori, length);
    ft_memmove(cpy_dest, cpy_ori, length);
    // printf("\t> %s\n\t> %s\n", dest, aux);
    PRINT_TEST_RESULT(strcmp(dest, cpy_dest) == 0);

    free_memory(2, cpy_ori, cpy_dest);
}

static void returns(char *dest, char *ori, size_t length)
{
    char *cpy_ori = strdup(ori);
    char *cpy_dest = strdup(dest);
    char *res1;
    char *res2;

    res1 = memmove(dest, ori, length);
    res2 = ft_memmove(cpy_dest, cpy_ori, length);
    // printf("\t> %s\n\t> %s\n", res1, res2);
    PRINT_TEST_RESULT(strcmp(res1, res2) == 0);

    free_memory(2, cpy_ori, cpy_dest);
}
