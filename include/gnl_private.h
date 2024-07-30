#ifndef GNL_PRIVATE_H
# define GNL_PRIVATE_H

char	*gnl_cpy(char *data);
int		gnl_find_ch(char *data, char ch);
void	*gnl_free(void **memory);
char	*add_line(char *data, char *add);

#endif