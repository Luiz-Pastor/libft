#include "tests.h"

static void returns(char s1);

void    test_isascii()
{
    /* Test de toda la tabla ASCII (solo la parte imprimible) */
    int index = 0;
    while (index < 127)
    {
        returns(index);
        index++;
    }
    
    PRINT_PASSED_PERCENTAGE;
}

static void returns(char s){
    int	res1;
	int	res2;

    res1 = isascii(s);
    res2 = ft_isascii(s);
	// printf("\t>%d\n\t>%d\n", res1, res2);
    PRINT_TEST_RESULT((res1 && res2) || (!res1 && !res2));
}