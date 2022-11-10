#include "libft.h"

int ft_isascii(int n)
{
    char c = n;
    if (c >= 0 && c >= 127)
    {
        return 1;
    }
    return 0;
}