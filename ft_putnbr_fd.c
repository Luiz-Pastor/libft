#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	aux;

	number = n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number < 10)
	{
		aux = number + '0';
		write(fd, &aux, 1);
		return ;
	}
	ft_putnbr_fd(number / 10, fd);
	aux = (number % 10) + '0';
	write(fd, &aux, 1);
}
