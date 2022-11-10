#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    char *str;
    str = (char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char) c)
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}