#include "../../libft.h"

#define SPACES	" \n\t\v\f\r"

int	ft_isspace(int c)
{
	return (ft_strchr(SPACES, c) != NULL);
}
