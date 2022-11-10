#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    int res = 0;
    while (i < n)
    {
        
        res = res + (&s1[i] - &s2[i]);
        i++;
    }
    return res;
}