#include "tests.h"

static void    change(int  number, char *expected);
static int	nb_length(long number);

void    test_putnbr_fd()
{
    change(123456789, "123456789");
    change(-123456789, "-123456789");
    change(0, "0");
    change(-0, "0");

    change(-2147483648, "-2147483648");
    change(2147483647, "2147483647");

    PRINT_PASSED_PERCENTAGE;
}

static void    change(int  number, char *expected)
{
    int     file;
    char    *res;
    size_t  count;
    size_t  length;
    int sign;

    sign = 0;
    if (number < 0)
        sign = 1;
    length = nb_length(number);
    res = (char *) malloc((length + sign + 1) * sizeof(char));
    if (!res)
        PRINT_TEST_RESULT(0);

    file = open("test.txt", O_CREAT | O_WRONLY);
    ft_putnbr_fd(number, file);
    close(file);


    file = open("test.txt", O_RDONLY);
    count = read(file, res, length + sign);
    res[length + sign] = '\0';
    close(file);
    // printf("\t> %s\n\t> %s\n", expected, res);
    PRINT_TEST_RESULT(count == (length + sign) && strcmp(res, expected) == 0);

    free(res);
}

static int	nb_length(long number)
{
	int	count;

	count = 0;
    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)
    {
        return (1);
    }
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}