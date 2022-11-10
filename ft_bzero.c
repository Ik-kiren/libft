#include "libft.h"

/*void * ft_memset(void *b, int c,size_t len)
{
    char *temp = (char *)b;
    int j;
    j = 0;
    len--;
    while (j <= len)
    {
        temp[j] = c;
        j++;
    }
    return b;
}*/

void ft_bzero(void *s, size_t n)
{   
    /*char *p = s;
    while (n > 0)
    {
       p[n - 1] = '0';
        n--;
    }*/
    s = ft_memset(s, 0, n);
}