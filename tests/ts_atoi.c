#include "tests.h"

static void returns(const char *s1);

void    test_atoi()
{
    /* Test basicos */
	returns("1234567890");
    returns("-1234567890");

    returns("abcdefghijklmnopqrdsuvwxyz");
    returns("-abcdefghijklmnopqrdsuvwxyz");

    returns("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    returns("-ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    /* Espacios */
    returns("\t\n \v\f\r42");
    returns("\t\n \v\f\r-42");
    returns("\t\n -\v\f\r42");
    returns("\t\n 42\v\f\r");
    
    /* Tests randoms */
    returns("4a2");
    returns("-4a2");

    returns("4_2");
    returns("-4_2");

    returns("4-2");
    returns("-4-2");

    returns("4/2");
    returns("-4/2");

    PRINT_PASSED_PERCENTAGE;
}

static void returns(const char *s){
    int	res1;
	int	res2;

    res1 = atoi(s);
    res2 = ft_atoi(s);
	// printf("\t>%d\n\t>%d\n", res1, res2);
    PRINT_TEST_RESULT(res1 == res2);
}