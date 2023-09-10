#include "tests.h"


static void   free_db_char(char **array);
static void   returns(char *s1, char sep, char **expected);

void    test_split()
{
    char *s1[] = {"Hello", "World!", NULL};
    char *s2[] = {"Hell", " W", "rld!", NULL};
    char *s3[] = {"He", "o Wor", "d!", NULL};
    char *s4[] = {"Hello World!", NULL};

    returns("Hello World!", ' ', s1);
    returns("Hello World!", 'o', s2);
    returns("Hello World!", 'l', s3);
    returns("Hello World!", '_', s4);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *s1, char sep, char **expected)
{
    size_t  index = 0;
    char    **res;

    res = ft_split(s1, sep);
    
    while (res[index])
    {
        if (strcmp(res[index], expected[index]))
        {
            printf("> %s\n> %s\n", res[index], expected[index]);
            PRINT_TEST_RESULT(0);
            free_db_char(res);
            return;
        }
        index++;
    }

    PRINT_TEST_RESULT(1);

    free_db_char(res);
}

static void free_db_char(char **array)
{
    size_t  index = 0;

    while (array[index])
    {
        free(array[index]);
        index++;
    }
    free(array);
}
