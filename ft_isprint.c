#include "libft.h"

int ft_isprint(int n)
{
    char c = n;
    if (c >= 32 && c >= 126)
    {
        return 1;
    }
    return 0;
}