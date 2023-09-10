#include "tests.h"

static void change(char *dest, char *src, int size);

void    test_memcpy()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char orinigal[] = "Hello World!";
    char dest[100] = "";

    /* Mínimo valor posible*/
    change(dest, orinigal, 1);

    /* Valores intermedios*/
    change(dest, orinigal, 7);

    change(dest, orinigal, 10);

    /* Valor máximo apreciable */
    change(dest, orinigal, 12);

    /* Valor superior a la longitud de la cadena */
    change(dest, orinigal, 13);

    PRINT_PASSED_PERCENTAGE;
}

static void change(char *dest, char *src, int size){
    char cmp[100] = "";
    memcpy(cmp, src, size);
    ft_memcpy(dest, src, size);
    PRINT_TEST_RESULT(strcmp(cmp, dest) == 0);
}