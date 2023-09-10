#include "tests.h"

static size_t  app_strlcat(char * restrict dst, const	char * restrict	src, size_t dstsize);

static void change(char *dest, char *ori, size_t length);
static void returns(char *dest, char *ori, size_t length);

void    test_strlcat()
{
    char s1[] = "Hello";
    char s2[] = "World!";
    
    change(s1, s2, 3);
    returns(s1, s2, 3);

    change(s1, s2, 6);
    returns(s1, s2, 6);

    change(s1, s2, 10);
    returns(s1, s2, 10);

    change(s1, s2, 11);
    returns(s1, s2, 11);

    change(s1, s2, 12);
    returns(s1, s2, 12);

    change(s1, s2, 13);
    returns(s1, s2, 13);

    change(s1, s2, 14);
    returns(s1, s2, 14);
    
    change(s1, s2, 20);
    returns(s1, s2, 20);

    PRINT_PASSED_PERCENTAGE;
}

static void change(char *dest, char *ori, size_t length)
{
    char s1[100];
    char s2[100];

    strcpy(s1, dest);
    strcpy(s2, dest);

    app_strlcat(s1, ori, length);
    ft_strlcat(s2, ori, length);

    PRINT_TEST_RESULT(strcmp(s1, s2) == 0);
}

static void returns(char *dest, char *ori, size_t length)
{
    char s1[100];
    char s2[100];
    size_t res1;
    size_t res2;

    strcpy(s1, dest);
    strcpy(s2, dest);

    res1 = app_strlcat(s1, ori, length);
    res2 = ft_strlcat(s2, ori, length);

    PRINT_TEST_RESULT(res1 == res2);
}

static size_t  app_strlcat(char * restrict dst, const	char * restrict	src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}
