#include "tests.h"

static void returns_char(size_t space, size_t size);
static void returns_int(size_t space, size_t size);
static void returns_long(size_t space, size_t size);

void    test_calloc()
{
    /* Ejecuciones normales (valgrind OK)*/
    returns_char(0, sizeof(char));
    returns_char(1, sizeof(char));
    returns_char(5, sizeof(char));
    returns_char(10, sizeof(char));
    returns_char(20, sizeof(char));
    returns_char(50, sizeof(char));
    returns_char(100, sizeof(char));

    returns_int(0, sizeof(int));
    returns_int(1, sizeof(int));
    returns_int(5, sizeof(int));
    returns_int(10, sizeof(int));
    returns_int(20, sizeof(int));
    returns_int(50, sizeof(int));
    returns_int(100, sizeof(int));

    returns_long(0, sizeof(long));
    returns_long(1, sizeof(long));
    returns_long(5, sizeof(long));
    returns_long(10, sizeof(long));
    returns_long(20, sizeof(long));
    returns_long(50, sizeof(long));
    returns_long(100, sizeof(long));

    /* Ejecuciones de errores (valgrind error size!!)*/
    returns_char(-50, sizeof(char));
    returns_char(-10, sizeof(char));

    returns_int(-50, sizeof(int));
    returns_int(-10, sizeof(int));

    returns_long(-50, sizeof(long));
    returns_long(-10, sizeof(long));
    
    PRINT_PASSED_PERCENTAGE;
}

static void returns_char(size_t space, size_t size){
    char	*res;
    size_t  index;
    int     flag;

    flag = 1;
    index = 0;
    res = (char *)ft_calloc(space, size);
    if (!res)
    {
        if ((long long)space <= 0 || (long long)size <= 0)
            PRINT_TEST_RESULT(1);
        else
            PRINT_TEST_RESULT(0);
        return;
    }
    while (index < space && flag)
    {
        if (res[index] != 0)
            flag = 0;
        index++;
    }
    	
    PRINT_TEST_RESULT(flag);

    free(res);
}

static void returns_int(size_t space, size_t size){
    int     *res;
    size_t  index;
    int     flag;

    flag = 1;
    index = 0;
    res = (int *)ft_calloc(space, size);
    if (!res)
    {
        if ((long long)space <= 0 || (long long)size <= 0)
            PRINT_TEST_RESULT(1);
        else
            PRINT_TEST_RESULT(0);
        return;
    }
    while (index < space && flag)
    {
        if (res[index] != 0)
            flag = 0;
        index++;
    }
    	
    PRINT_TEST_RESULT(flag);

    free(res);
}

static void returns_long(size_t space, size_t size){
    long	*res;
    size_t  index;
    int     flag;

    flag = 1;
    index = 0;
    res = (long *)ft_calloc(space, size);
    if (!res)
    {
        if ((long long)space <= 0 || (long long)size <= 0)
            PRINT_TEST_RESULT(1);
        else
            PRINT_TEST_RESULT(0);
        return;
    }
    while (index < space && flag)
    {
        if (res[index] != 0)
            flag = 0;
        index++;
    }
    	
    PRINT_TEST_RESULT(flag);

    free(res);
}