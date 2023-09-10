#include "tests.h"

static void appear(char *str, int c);
static void no_appear(char *str, int c);

void    test_strrchr()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char s1[] = "Hello World!";

	appear(s1, 'e');
	appear(s1, 'o');
	appear(s1, '!');
	no_appear(s1, 'L');
	no_appear(s1, 'w');


    PRINT_PASSED_PERCENTAGE;
}

static void appear(char *str, int c){
    char *res1;
	char *res2;

    res1 = strrchr(str, c);
    res2 = ft_strrchr(str, c);
	// printf("\t>%s\n\t>%s\n", res1, res2);
    PRINT_TEST_RESULT((res1[0] == res2[0]) && (res2[0] == c));
}

static void no_appear(char *str, int c){
    char *res1;
	char *res2;

    res1 = strrchr(str, c);
    res2 = ft_strrchr(str, c);
	// printf("\t>%d\n\t>%d\n", res1, res2);
    PRINT_TEST_RESULT(!res1 && !res2);
}