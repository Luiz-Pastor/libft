#include "tests.h"

static void returns(char *s);

void    test_strlen()
{
	/* Copias de la variable original para poder hacer las pruebas */
    char s1[] = "Hello World!";
	char s2[] = "This is a proob text";
	char s3[] = "For example, |··$%%\\_-+``ç{}()[]";
	char s4[] = "Lorem ipsum dolor sit amet,\tconsectetur adipiscing elit.\vUt in elementum\rlacus. Phasellus iaculis dignissim tempus. Fusce blandit ligula maximus eros accumsan consectetur. Cras bibendum auctor neque, ut semper libero. Duis sit amet blandit quam. Donec ultricies gravida elit a tincidunt. Proin quis nunc eget augue tincidunt lacinia eget in nibh. Mauris porta bibendum elit vulputate ultricies. Mauris euismod mi eu hendrerit venenatis. Vivamus ligula orci, accumsan non augue at, commodo egestas nibh. Suspendisse quis orci velit.\n\nDonec vulputate enim nec sagittis aliquam. Sed accumsan malesuada cursus. Sed sodales cursus fringilla. Aliquam ac ante pellentesque, lobortis diam ac, condimentum leo.";

	returns(s1);
	returns(s2);
	returns(s3);
	returns(s4);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(char *s){
    int	res1;
	int	res2;

    res1 = strlen(s);
    res2 = ft_strlen(s);
	// printf("\t>%d\n\t>%d\n", res1, res2);
    PRINT_TEST_RESULT(res1 == res2);
}