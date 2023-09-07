#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	length;

	length = ft_strlen(s);
	write(fd, s, length);
}

/*
	****************************************
	* void	ft_putstr_fd(char *s, int fd)
	* {
	* 	size_t	index;
	*
	* 	index = 0;
	* 	if (!s)
	* 		return ;
	* 	while (s[index])
	* 		write(fd, &s[index++], 1);
	* }
	****************************************
	* void	ft_putstr_fd(char *s, int fd)
	* {
	* 	size_t	index;
	*
	* 	index = 0;
	* 	if (!s)
	* 		return ;
	* 	while (s[index])
	* 		ft_putchar_fd(s[index++], fd);
	* }
	****************************************
*/
