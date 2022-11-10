#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i = dstsize;
    int j = 0;
    while (src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return i;
}