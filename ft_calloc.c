#include "libft.h"

void *calloc( size_t elementcount, size_t elementsize)
{

    void *str;
    str = malloc(elementcount * elementsize);
    if (str == NULL)
    {
        return NULL;
    }
    ft_memset(str, 0, elementcount * elementsize);
    return str;
}