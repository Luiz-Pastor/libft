#include "tests.h"

static void returns(char *str, int c);

void    test_strchr()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char s1[] = "Hello World!";

    /* Apaerce */
	returns(s1, 'e');
    returns(s1, 'o');
	returns(s1, '!');

    /* No aparece */
	returns(s1, 'L');
	returns(s1, 'w');

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *str, int c){
    char *res1;
	char *res2;

    res1 = strchr(str, c);
    res2 = ft_strchr(str, c);
	// printf("\t>%s\n\t>%s\n", res1, res2);
    PRINT_TEST_RESULT((!res1 && !res2) || ((res1[0] == res2[0]) && (res2[0] == c)));
}
