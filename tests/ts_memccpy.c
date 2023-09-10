#include "tests.h"

static void change(char *src, int ch, int size);

void    test_memccpy()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char orinigal[] = "Hello World!";

    /* Mínimo valor posible*/
    change(orinigal, 'o', 1);
    change(orinigal, 'H', 1);

    /* Valores intermedios*/
    change(orinigal, '_', 7);
    change(orinigal, ' ', 7);

    change(orinigal, '\\', 10);
    change(orinigal, 'm', 10);

    /* Valor máximo apreciable */
    change(orinigal, '+', 12);
    change(orinigal, 'l', 12);

    /* Valor superior a la longitud de la cadena */
    change(orinigal, '-', 13);
    change(orinigal, 'd', 13);

    PRINT_PASSED_PERCENTAGE;
}

static void change(char *src, int ch, int size){
    char cmp[100] = "";
    char dest[100] = "";

    memccpy(cmp, src, ch, size);
    ft_memccpy(dest, src, ch, size);
    PRINT_TEST_RESULT(strcmp(cmp, dest) == 0);
    if (strcmp(cmp, dest) != 0)
        printf("\t> %s (%ld)\n\t> %s (%ld)\n", cmp, strlen(cmp), dest, strlen(dest));
}