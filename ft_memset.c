#include "libft.h"

void * ft_memset(void *b, int c, size_t len)
{

    char *temp = (char *)b;
    while (len > 0)
    {
        temp[len - 1] = c;
        len--;
    }
    return temp;
}