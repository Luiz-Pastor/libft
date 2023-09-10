#ifndef TESTS_H
# define TESTS_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <fcntl.h>

# include "./../libft.h"
# include "./basic/test.h"

/* ##################################################### */
void    test_atoi();
void    test_bzero();
void    test_calloc();
void    test_isalnum();
void    test_isalpha();
void    test_isascii();
void    test_isdigit();
void    test_isprint();
void    test_itoa();
void    test_list();
void    test_memccpy();
void    test_memchr();
void    test_memcmp();
void    test_memcpy();
void    test_memmove();
void    test_memset();
void    test_putchar_fd();
void    test_putendl_fd();
void    test_putnbr_fd();
void    test_putstr_fd();
void    test_split();
void    test_strchr();
void    test_strdup();
void    test_striteri();
void    test_strjoin();
void    test_strlcat();
void    test_strlcpy();
void    test_strlen();
void    test_strmapi();
void    test_strncmp();
void    test_strnstr();
void    test_strrchr();
void    test_strtrim();
void    test_substr();
void    test_tolower();
void    test_toupper();
/* ##################################################### */
# endif