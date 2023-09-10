#include "tests.h"

static void change(char *s1, int size);

void    test_bzero()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char orinigal[] = "Hello World!";
    char *s1 = strdup(orinigal);
    char *s2 = strdup(orinigal);
    char *s3 = strdup(orinigal);
    char *s4 = strdup(orinigal);
    char *s5 = strdup(orinigal);

    /* Mínimo valor posible*/
    change(s1, 1);

    /* Valores intermedios*/
    change(s2, 7);

    change(s3, 10);

    /* Valor máximo apreciable */
    change(s4, 12);

    /* Valor superior a la longitud de la cadena */
    change(s5, 13);

	free_memory(5, s1, s2, s3, s4, s5);
    PRINT_PASSED_PERCENTAGE;
}

static void change(char *s1, int size){
    char *s2 = strdup(s1);
    bzero(s1, size);
    ft_bzero(s2, size);
    // printf("\t>%s\n\t>%s\n", s1, s2);
	PRINT_TEST_RESULT(s1[size - 1] == s2[size - 1] && s2[size - 1] == 0);
    free(s2);
}
