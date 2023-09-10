#include "tests.h"

static void returns(char *s1, char *s2, int size);

void    test_memcmp()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char s1[] = "Hello World!";
	char s2[] = "Hello different!";
	char s3[] = "Hello Wa";

    /* Mínimo valor posible*/
	returns(s1, s1, 1);
	returns(s1, s2, 1);
	returns(s1, s3, 1);
    returns(s2, s3, 1);

    /* Valores intermedios*/
    returns(s1, s1, 7);
    returns(s1, s2, 7);
    returns(s1, s3, 7);
    returns(s2, s3, 7);

    returns(s1, s1, 10);
    returns(s1, s2, 10);
    returns(s1, s3, 10);
    returns(s2, s3, 10);

    /* Valor máximo apreciable */
    returns(s1, s1, 12);
    returns(s1, s2, 12);
    returns(s1, s3, 12);
    returns(s2, s3, 12);

    /* Valor superior a la longitud de la cadena */
    returns(s1, s1, 13);
    returns(s1, s2, 13);
    returns(s1, s3, 13);
    returns(s2, s3, 13);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *s1, char *s2, int size){
    int	res1;
	int	res2;

    res1 = memcmp(s1, s2, size);
    res2 = ft_memcmp(s1, s2, size);
	// printf("\n==%d==\n> %s\n> %s\n\t>%d\n\t>%d\n==%d==\n", size, s1, s2, res1, res2, size);
    PRINT_TEST_RESULT((res1 && res2) || (!res1 && !res2));
}