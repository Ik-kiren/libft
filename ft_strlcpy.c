#include "libft.h"
#include <string.h>


size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t i = 0;
    while (i <= dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return i;
}

int main ()
{

    char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
    ft_strlcpy(dest, "1", 0);
    printf("%s\n", dest);
    strlcpy(dest, "1", 0);
    printf("%s\n", dest);
}