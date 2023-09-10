#include <stdlib.h>
#include <stdarg.h>

void    free_memory(int count, ...)
{
    int     index;
    va_list variables;
    void    *elem;

    va_start(variables, count);

    index = 0;
    while (index < count)
    {
        elem = va_arg(variables, void *);
        free(elem);
        index++;
    }
    va_end(variables);
}