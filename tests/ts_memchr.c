#include "tests.h"

static void returns(char *src, int ch, int size, char expected);

void    test_memchr()
{
	/* Copias de la variable original para poder hacer las pruebas */
	char orinigal[] = "Hello World!";
	char expected_NULL = '\r';

	/* Mínimo valor posible*/
	returns(orinigal, 'o', 1, expected_NULL);
	returns(orinigal, 'H', 1, 'H');

	/* Valores intermedios*/
	returns(orinigal, '_', 7, expected_NULL);
	returns(orinigal, ' ', 7, ' ');

	returns(orinigal, '\\', 10, expected_NULL);
	returns(orinigal, 'W', 10, 'W');

	/* Valor máximo apreciable */
	returns(orinigal, '+', 12, expected_NULL);
	returns(orinigal, 'l', 12, 'l');

	/* Valor superior a la longitud de la cadena */
	returns(orinigal, '-', 13, expected_NULL);
	returns(orinigal, 'd', 13, 'd');

	PRINT_PASSED_PERCENTAGE;
}

static void returns(char *src, int ch, int size, char expected)
{
	char *res1;
	char *res2;

	res1 = memchr(src, ch, size);
	res2 = ft_memchr(src, ch, size);
	//printf("\t>%s\n\t>%s\n", res1, res2);
	PRINT_TEST_RESULT((!res1 && !res2) || (res1[0] == expected && res2[0] == expected));
}