#include "tests.h"

static void returns(const char *s1, const char *s2, size_t size);

void    test_strncmp()
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

static void returns(const char *s1, const char *s2, size_t size){
    int	res1;
	int	res2;

    res1 = strncmp(s1, s2, size);
    res2 = ft_strncmp(s1, s2, size);
	// printf("\t>%d\n\t>%d\n", res1, res2);
    PRINT_TEST_RESULT((res1 < 0 && res2 < 0) || (res1 > 0 && res2 > 0) || (res1 == 0 && res2 == 0));
}