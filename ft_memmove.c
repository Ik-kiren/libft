#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{

    char *temp = malloc(sizeof(char) * len);
    ft_memcpy(temp, src, len);
    ft_memcpy(dst, temp, len);
    free(temp);
    return dst;
}