#include "tests.h"

#define MAX_NAME 1024

static void ft_wait(int count);

int	main(int argc, char *argv[]) {
	int count;
	char test_name[MAX_NAME];

	if (argc == 1){
		/* Se imprimen todos los tests */
		count = 1;
		strcpy(test_name, " ");
	} else{
		/* Se imprime un test en especifico */
		count = 0;
		strcpy(test_name, argv[1]);
	}

	/* Test de la funcion: memset*/
	if (count || !strcmp(test_name, "ts_memset") || !strcmp(test_name, "memset"))
	{
		test_memset();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: bzero*/
	if (count || !strcmp(test_name, "ts_bzero") || !strcmp(test_name, "bzero"))
	{
		test_bzero();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: memcpy*/
	if (count || !strcmp(test_name, "ts_memcpy") || !strcmp(test_name, "memcpy"))
	{
		test_memcpy();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: memccpy*/
	if (count || !strcmp(test_name, "ts_memccpy") || !strcmp(test_name, "memccpy"))
	{
		test_memccpy();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: memchr*/
	if (count || !strcmp(test_name, "ts_memchr") || !strcmp(test_name, "memchr"))
	{
		test_memchr();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: memcmp*/
	if (count || !strcmp(test_name, "ts_memcmp") || !strcmp(test_name, "memcmp"))
	{
		test_memcmp();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strlen*/
	if (count || !strcmp(test_name, "ts_strlen") || !strcmp(test_name, "strlen"))
	{
		test_strlen();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strchr*/
	if (count || !strcmp(test_name, "ts_strchr") || !strcmp(test_name, "strchr"))
	{
		test_strchr();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strrchr*/
	if (count || !strcmp(test_name, "ts_strrchr") || !strcmp(test_name, "strrchr"))
	{
		test_strrchr();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strncmp*/
	if (count || !strcmp(test_name, "ts_strncmp") || !strcmp(test_name, "strncmp"))
	{
		test_strncmp();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: */
	if (count || !strcmp(test_name, "ts_atoi") || !strcmp(test_name, "atoi"))
	{
		test_atoi();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: isalpha*/
	if (count || !strcmp(test_name, "ts_isalpha") || !strcmp(test_name, "isalpha"))
	{
		test_isalpha();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: isdigit*/
	if (count || !strcmp(test_name, "ts_isdigit") || !strcmp(test_name, "isdigit"))
	{
		test_isdigit();
		FORCE_RESET();
	}

	ft_wait(count);
	
	/* Test de la funcion: isalnum*/
	if (count || !strcmp(test_name, "ts_isalnum") || !strcmp(test_name, "isalnum"))
	{
		test_isalnum();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: isascii*/
	if (count || !strcmp(test_name, "ts_isascii") || !strcmp(test_name, "isascii"))
	{
		test_isascii();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: isprint*/
	if (count || !strcmp(test_name, "ts_isprint") || !strcmp(test_name, "isprint"))
	{
		test_isprint();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: toupper*/
	if (count || !strcmp(test_name, "ts_toupper") || !strcmp(test_name, "toupper"))
	{
		test_toupper();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: tolower*/
	if (count || !strcmp(test_name, "ts_tolower") || !strcmp(test_name, "tolower"))
	{
		test_tolower();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: calloc*/
	if (count || !strcmp(test_name, "ts_calloc") || !strcmp(test_name, "calloc"))
	{
		test_calloc();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strdup*/
	if (count || !strcmp(test_name, "ts_strdup") || !strcmp(test_name, "strdup"))
	{
		test_strdup();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strlcat*/
	if (count || !strcmp(test_name, "ts_strlcat") || !strcmp(test_name, "strlcat"))
	{
		test_strlcat();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: memmove*/
	if (count || !strcmp(test_name, "ts_memmove") || !strcmp(test_name, "memmove"))
	{
		test_memmove();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strnstr*/
	if (count || !strcmp(test_name, "ts_strnstr") || !strcmp(test_name, "strnstr"))
	{
		test_strnstr();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strlcpy*/
	if (count || !strcmp(test_name, "ts_strlcpy") || !strcmp(test_name, "strlcpy"))
	{
		test_strlcpy();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: substr*/
	if (count || !strcmp(test_name, "ts_substr") || !strcmp(test_name, "substr"))
	{
		test_substr();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strjoin*/
	if (count || !strcmp(test_name, "ts_strjoin") || !strcmp(test_name, "strjoin"))
	{
		test_strjoin();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strtrim*/
	if (count || !strcmp(test_name, "ts_strtrim") || !strcmp(test_name, "strtrim"))
	{
		test_strtrim();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: split*/
	if (count || !strcmp(test_name, "ts_split") || !strcmp(test_name, "split"))
	{
		test_split();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: itoa*/
	if (count || !strcmp(test_name, "ts_itoa") || !strcmp(test_name, "itoa"))
	{
		test_itoa();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: strmapi*/
	if (count || !strcmp(test_name, "ts_strmapi") || !strcmp(test_name, "strmapi"))
	{
		test_strmapi();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: striteri*/
	if (count || !strcmp(test_name, "ts_striteri") || !strcmp(test_name, "striteri"))
	{
		test_striteri();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: putchar_fd*/
	if (count || !strcmp(test_name, "ts_putchar_fd") || !strcmp(test_name, "putchar_fd"))
	{
		test_putchar_fd();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: putstr_fd*/
	if (count || !strcmp(test_name, "ts_putstr_fd") || !strcmp(test_name, "putstr_fd"))
	{
		test_putstr_fd();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: putendl_fd*/
	if (count || !strcmp(test_name, "ts_putendl_fd") || !strcmp(test_name, "putendl_fd"))
	{
		test_putendl_fd();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funcion: putnbr_fd*/
	if (count || !strcmp(test_name, "ts_putnbr_fd") || !strcmp(test_name, "putnbr_fd"))
	{
		test_putnbr_fd();
		FORCE_RESET();
	}

	ft_wait(count);

	/* Test de la funciones de: list*/
	if (count || !strcmp(test_name, "ts_list") || !strcmp(test_name, "list"))
		test_list();

	return 0;
}

static void ft_wait(int count)
{
	char text[MAX_NAME];
	if (count)
	{
		printf("\nEnter a key to continue...");
		fgets(text, 1024, stdin);
		printf("\n\n");
	}
}
