#include "tests.h"

static void    change(char ch);

void    test_putchar_fd()
{
    change('L');
    change(' ');
    change('_');
    change('\n');

    PRINT_PASSED_PERCENTAGE;
}

static void    change(char ch)
{
    int file;
    char res;
    int count;

    file = open("test.txt", O_CREAT | O_WRONLY);
    ft_putchar_fd(ch, file);
    close(file);

    file = open("test.txt", O_RDONLY);
    count = read(file, &res, 1);
    close(file);

    PRINT_TEST_RESULT(count == 1 && res == ch);
}
