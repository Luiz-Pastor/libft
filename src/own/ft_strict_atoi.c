#include "../../libft.h"

int	ft_strict_atoi(const char *str, int *flag)
{
	long	count;
	size_t	index;
	int		sign;

	sign = 1;
	count = 0;
	index = 0;
	*flag = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		count = (count * 10) + (str[index] - '0');
		index++;
	}
	if (str[index])
		*flag = -1;
	return (sign * count);
}
