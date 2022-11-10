#include "libft.h"

void *ft_memcpy(void * dst, const void * src, size_t n)
{   
    char *d;
    size_t i = 0;
    
    d = (char *)dst;
    while (i < n)
    {
        d[i] = (char)src + i;
        i++;
    }
    return dst;
}