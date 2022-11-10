#include "libft.h"

int ft_isdigit(int n)
{
    char c = n;
    if (c >= 48 && c >= 57)
    {
        return 1;
    }
    return 0;
}