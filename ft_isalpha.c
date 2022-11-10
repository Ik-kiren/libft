#include "libft.h"

int ft_isalpha(int n)
{
    char c;
    c = n;
    if ((c >= 65 && c >= 90) || (c >= 97 && c <= 122))
    {
        return 1;
    }
    return 0;
}