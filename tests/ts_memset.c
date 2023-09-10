#include "tests.h"

static void change(char *s1, char ch, int size);
static void returns(char *s1, char ch, int size);

void    test_memset()
{
	/* Copias de la variable original para poder hacer las pruebas */
	char orinigal[] = "Hello World!";
	char *s1a = strdup(orinigal);
	char *s2a = strdup(orinigal);
	char *s3a = strdup(orinigal);
	char *s4a = strdup(orinigal);
	char *s5a = strdup(orinigal);
	char *s1b = strdup(orinigal);
	char *s2b = strdup(orinigal);
	char *s3b = strdup(orinigal);
	char *s4b = strdup(orinigal);
	char *s5b = strdup(orinigal);

	/* Mínimo valor posible*/
	change(s1a, '*', 1);
	returns(s1b, '*', 1);

	/* Valores intermedios*/
	change(s2a, '#', 7);
	returns(s2b, '#', 7);

	change(s3a, '_', 10);
	returns(s3b, '_', 10);

	/* Valor máximo apreciable */
	change(s4a, 'b', 12);
	returns(s4b, 'b', 12);

	/* Valor superior a la longitud de la cadena */
	change(s5a, 'Z', 13);
	returns(s5b, 'Z', 13);

	/* Libreando la memoria usada */
	/*free(s1a);
	free(s2a);
	free(s3a);
	free(s4a);
	free(s5a);
	free(s1b);
	free(s2b);
	free(s3b);
	free(s4b);
	free(s5b);*/
	free_memory(10, s1a, s1b, s2a, s2b, s3a, s3b, s4a, s4b, s5a, s5b);
	PRINT_PASSED_PERCENTAGE;
}

static void change(char *s1, char ch, int size){
	char *s2 = strdup(s1);
	memset(s1, ch, size);
	ft_memset(s2, ch, size);
	// printf("\t>%s\n\t>%s\n", s1, s2);
	PRINT_TEST_RESULT(s1[size - 1] == s2[size - 1] && s2[size - 1] == ch);
	free(s2);
}

static void returns(char *s1, char ch, int size){
	char *s2 = strdup(s1);
	char *res1;
	char *res2;

	res1 = memset(s1, ch, size);
	res2 = ft_memset(s2, ch, size);
	// printf("\t>%s\n\t>%s\n", s1, s2);
	PRINT_TEST_RESULT(res1[size - 1] == res2[size - 1] && res2[size - 1] == ch);
	free(s2);
}